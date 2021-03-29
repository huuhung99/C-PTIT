//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int t;
long long __lcm(long long x,long long y){
	return x*y/__gcd(x,y);
}
int main(){
	cin>>t;
	while(t--){
		long long x,y,z,n;cin>>x>>y>>z>>n;
		if(n<1){
			cout<<-1<<endl;
			continue;
		}
		long long lcm=__lcm(x,__lcm(y,z));
		long long gioiHan=pow(10,n-1);
		long long gioiHanMax=pow(10,n);
		long long soDu=gioiHan%lcm;
		long long soChia=gioiHan/lcm;
		long long result=soDu!=0?soChia*lcm+lcm:soChia*lcm;
		if(result>=gioiHan&&result<=gioiHanMax){
			cout<<result<<endl;
			continue;
		}
		cout<<-1<<endl;
	}
	return 0;
}
