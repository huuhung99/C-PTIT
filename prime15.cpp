#include<bits/stdc++.h>
using namespace std;
int t;
int gcdMin(int n){
	for(int i=3;i<=n;i+=2){
		if(n%i==0) return i;
	}
}
bool isprime(int n){
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
		int n;
//		n=rand()%1000;
//		cout<<n<<endl;
		cin>>n;
		cout<<"1 ";
		for(int i=2;i<=n;i++){
			if(i%2==0){
				cout<<"2 ";
				continue;
			}
			if(isprime(i)){
				cout<<i<<" ";
				continue;
			}
			cout<<gcdMin(i)<<" ";
		}
		cout<<endl;
	}
}
