#include<bits/stdc++.h>
using namespace std;
int t,n,k;
bool check(int a,int b){
	if(abs(a-k)<abs(b-k)) return true;
	return false;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		stable_sort(a,a+n,check);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
