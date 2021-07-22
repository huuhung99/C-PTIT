#include<bits/stdc++.h>
using namespace std;
int t;
long long tongCacUoc(long long n){
    if(n==1) return n;
	long long tong=0;
	for(int i=1;i*i<n;++i){
		if(n%i==0) tong+=i+n/i;
	}
	if(sqrt(n)==(int)sqrt(n)) tong+=sqrt(n);
	return tong;
}
int main(){
	cin>>t;
	while(t--){
		long long n;cin>>n;
		if(n==1){
			cout<<1<<endl;
			continue;
		}
		else{
			long long sum=0;
			for(int i=1;i<sqrt(n);++i){
				if(n%i==0) sum+=i+n/i;
			}
			if(sqrt(n)==(int) sqrt(n)) sum+=sqrt(n);
			cout<<sum;
		}
		cout<<endl;
	}
	return 0;
}
