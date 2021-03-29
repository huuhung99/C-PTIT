#include<bits/stdc++.h>
using namespace std;
int t;
bool isprime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0) return false;
	return true;
}
int main(){
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		if(n<=2&&2<=m){
			cout<<"2 ";
			n=3;
		}
		if(n%2==0) n++;
		for(int i=n;i<=m;i+=2){
			if(isprime(i)) cout<<i<<" ";
		}
		cout<<endl;
	}
}
