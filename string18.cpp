#include<bits/stdc++.h>
using namespace std;
int t;
int sub(string a){
	int len=a.length();
	for(int i=0;i<len-2;i++){
		string tmp="";
		for(int j=i;j<i+3;j++) tmp+=a[j];
//		cout<<tmp<<endl;
		if(tmp=="100") {
			return 3+ sub(a.substr(0,i)+a.substr(i+3,len));
		}
	}
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
		cout<<sub(a)<<endl;
	}
	return 0;
}
