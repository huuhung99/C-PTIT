#include<iostream>
using namespace std;
int a,b;
bool prime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}
void solve(int a,int b){
	if(a%2==0) a++;
	for(int j=a;j<=b;j+=2){
		if(prime(j)) cout<<j<<" ";
	}
}
int main(){
	cin>>a>>b;
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(a<3){
		cout<<2<<" ";
		solve(3,b);
	}
	else solve(a,b);
	cout<<endl;
	return 0;
}
