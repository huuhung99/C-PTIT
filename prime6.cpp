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
	srand(time(NULL));
	while(t--){
		int n;
		cin>>n;
//		n=rand()%100+4;
//		if(n%2!=0) n+=1;
//		cout<<n<<endl;
		if(n==4){
			cout<<"2 2"<<endl;
			continue;
		}
		if(isprime(n-2)){
			cout<<"2 "<<n-2<<endl;
		}
		for(int i=3;i<=n/2;i+=2){
			if(isprime(i)&&isprime(n-i)) {
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
	}
}
