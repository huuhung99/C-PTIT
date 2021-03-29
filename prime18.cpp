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
		long long m,n,a,b;
//		n=rand()%1000;
//		cout<<n<<endl;
		cin>>m>>n>>a>>b;
		long long lcm=a*b/__gcd(a,b);		
		m--;
		int dem=n/a+n/b-m/a-m/b-n/lcm+m/lcm;
		cout<<dem<<endl;
	}
}
