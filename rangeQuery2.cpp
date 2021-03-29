#include<bits/stdc++.h>
using namespace std;
int t;
string mountain(int a[],int dau,int cuoi){
	if(dau==cuoi||dau+1==cuoi) return "Yes";
	int index=dau;
	if(a[index]>a[index+1]) return "No";
	for(int i=dau+1;i<=cuoi;i++){
		if(a[i-1]<=a[i]) index=i;
		else break;
	}
	for(int i=index+1;i<=cuoi;i++){
		if(a[i]>a[i-1]) return "No";
	}
	return "Yes";
}
int main(){
	cin>>t;
	while(t--){
		int n,dau,cuoi;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>dau>>cuoi;
		cout<<mountain(a,dau,cuoi)<<endl;
	}
	return 0;
}
