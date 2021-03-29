#include<bits/stdc++.h>
using namespace std;
int t;
long long chiaSoLon(long long a, char b[]){
	long long tmp=0;
	for(int i=0;i<strlen(b);i++){
		tmp=(tmp*10+b[i]-'0')%a;
	}
	return tmp;
}
int main(){
	cin>>t;
	while(t--){
		long long a;
		char b[1005];
		cin>>a>>b;
		cout<<__gcd(a,chiaSoLon(a,b))<<endl;
	}
	return 0;
}

