#include<bits/stdc++.h>
using namespace std;
int t;
bool isprime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}
int main(){
	cin>>t;
//	srand(time(NULL));
	while(t--){
		long long n;
//		n=rand()%1000;
//		cout<<n<<endl;
		cin>>n;
		if(n<4){
			cout<<0<<endl;
			continue;
		}
		int can=sqrt(n);
		int dem=0;
		if(can>1) dem++;
		for(int i=3;i<=can;i+=2){
			if(isprime(i))dem++;
		}
		cout<<dem<<endl;
	}
}
