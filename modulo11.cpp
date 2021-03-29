#include<iostream>
using namespace std;
int t;
long long mul(long long a,long long b,long long c){
	if(b==0||a==0) return 0;
	if(b==1) return a%c;
	if(a==1) return b%c;
	a%=c;
	b%=c;
	if(b%2==0) return mul(a*2,b/2,c);
	return (a+mul(a*2,b/2,c))%c;
}
int main(){
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<mul(a,b,c)<<endl;
	}
	return 0;
}
