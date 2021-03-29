#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n+m];
		for(int i=0;i<n+m;i++)cin>>a[i];
		sort(a,a+n+m);
		cout<<a[0]<<" ";
		for(int i=1;i<n+m;i++){
			if(a[i]!=a[i-1]) cout<<a[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n+m-1;i++){
			if(a[i]!=a[i-1]&&a[i]==a[i+1]) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
