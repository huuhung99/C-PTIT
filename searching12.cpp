#include<bits/stdc++.h>
using namespace std;
int t;
int check(int a[],int n,int k){
	int i=0,r=1;
	while(i<n&&r<n){
		if(a[r]-a[i]==k) return 1;
		else if(a[r]-a[i]>k) i++;
		else r--;
	}
	return -1;
}
int main(){
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cout<<check(a,n,k); 
		cout<<endl;
	}
	return 0;
}
