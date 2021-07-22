#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0)
			return false;
	return true;
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int tmp;cin>>tmp;
			if(isprime(tmp))
				cout<<"1 ";
			else cout<<"0 ";
		}
		cout<<endl;
	}
}
