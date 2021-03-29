#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n]; 
		for(int i=0;i<n;i++){
		   cin>>a[i];
		}
		sort(a,a+n);
		ll ans=0;
		int i=0;
		while(i<n){
			int j=upper_bound(a+i+1,a+n,a[i]+k-1)-a-i-1;
			ans+=j;
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
		

