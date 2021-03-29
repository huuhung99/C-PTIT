#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		long long a,x,y;cin>>a>>x>>y;
		long long gcd=__gcd(x,y);
		for(long long i=0;i<gcd;i++) cout<<a;
		cout<<endl;
	}
	return 0;
}
