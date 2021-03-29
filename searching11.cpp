#include<bits/stdc++.h>
using namespace std;
int t;
bool check(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int check1=-1;
		if(check(n-2)) {
			cout<<"2 "<<n-2<<endl;
			continue;
		}
		for(int i=3;i<n;i+=2){
			if(check(i)&&check(n-i)){
				cout<<i<<" "<<n-i<<endl;
				check1=0;
				break;
			}
		}
		if(check1==-1) cout<<check1<<endl;
	}
	return 0;
}
