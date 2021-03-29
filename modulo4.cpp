#include<iostream>
using namespace std;
int t;
void solve(int n,long long k){
	if(n<k&&n*(n+1)/2==k) cout<<1<<endl;
	else {
		long long result=0;
		result+=k*(k-1)/2;
		for(int i=k+1;i<=n;i++){
			result+=i%k;
		}
		if(result==k)cout<<1<<endl;
		else cout<<0<<endl;
	}
}
int main(){
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		solve(n,k);
	}
	return 0;
}
