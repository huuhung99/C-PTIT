#include<bits/stdc++.h>
using namespace std;
int t;
string intTobit(int n,int size){
	string s="";
	int count=size-1;
	while(n){
		if(n%2==1)s+='1';
		else s+='0';
		n/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n]={0};
		for(int i=0;i<pow(2,n);i++){
			string tmp=intTobit(i,n);
			for(int i=0;i<n-tmp.length();i++) cout<<0;
			cout<<tmp<<" ";
		}
		cout<<endl;
	}
	return 0;
}
