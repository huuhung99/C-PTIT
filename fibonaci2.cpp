#include<iostream>
using namespace std;
int t;
long long fibo[1000];
void fibonacci(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=92;i++)
		fibo[i]=fibo[i-1]+fibo[i-2];
}
string checkFibo(long long n){	
	for(int i=0;i<=92;i++){
		if(n==fibo[i]) return "YES";
	}
	return "NO";
}
int main(){
	cin>>t;
	fibonacci();
	while(t--){		
		long long n;cin>>n;
		cout<<checkFibo(n);
		cout<<endl;
	}
	return 0;
}
