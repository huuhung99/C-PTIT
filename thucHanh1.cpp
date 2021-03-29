#include<bits/stdc++.h>
using namespace std;
int t;
typedef long long ll;
//bool isprime(ll n){
//	if(n<2) return false;
//	if(n<4) return true;
//	if(n%2==0||n%3==0) return false;
//	for(int i=5;i*i<=n;i+=6)
//		if(n%i==0||n%(i+2)==0)
//			return false;
//	return true;;
//}
ll tongCacUoc(ll n){
    if(n==1) return n;
//    else if(isprime(n)) return n+1;
	ll tong=0;
	for(int i=1;i*i<n;++i){
		if(n%i==0) tong+=i+n/i;
	}
	if(sqrt(n)==(int)sqrt(n)) tong+=sqrt(n);
	return tong;
}
int main(){
	cin>>t;
	while(t--){
		ll n;cin>>n;
		if(n==1){
			cout<<1<<endl;
			continue;
		}
		else{
			ll sum=0;
			for(int i=1;i<sqrt(n);++i){
				if(n%i==0) sum+=i+n/i;
			}
			if(sqrt(n)==(int) sqrt(n)) sum+=sqrt(n);
			cout<<sum;
		}
		cout<<endl;
	}
	return 0;
}
