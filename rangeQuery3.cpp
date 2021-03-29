#include<bits/stdc++.h>
using namespace std;
int t,n,k;
bool isprime(int a){
	if(a<2) return false;
	if(a<4) return true;
	if(a%2==0||a%3==0) return false;
	for(int j=5;j*j<=a;j+=6)
		if(a%j==0||a%(j+2)==0) return false;
	return true;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		int dem=0;
		if(n<3&&k>=2) dem++;
		if(n%2==0) n+=1;
		for(int i=n;i<=k;i+=2){
			if(isprime(i)) {
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
