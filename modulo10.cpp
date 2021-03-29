#include<bits/stdc++.h>
using namespace std;
int t;
int m=1e9+7;
typedef long long ll;
ll poww(ll k,ll mu){
	if(mu==0) return 1;
	if(mu==1) return k;
	if(mu%2==0) return poww((k*k)%m,mu/2)%m;
	return (k*poww((k*k)%m,mu/2)%m)%m;
}
int main(){
	cin>>t;
	while(t--){
		int n,k,mu=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		ll sum=0;
		for(int i=n-1;i>=0;i--){
			ll tmp=poww(k,mu);
			sum+=(a[i]*tmp);
			mu++;
			cout<<"sum="<<sum<<" "<<"mu="<<tmp<<endl;
		}
		cout<<sum%m<<endl;
	}
	return 0;
}
