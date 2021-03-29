#include<iostream>
using namespace std;
int t;
long long m=1e9+7;
long long fibonacci(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	long long f0=0,f1=1,f2;
	for(int i=2;i<=n;i++){
		f2=(f0+f1)%m;
		f0=f1;
		f1=f2;
	}
	return f2%m;
}
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibonacci(n)<<endl;
	}
	return 0;
}
