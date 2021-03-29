#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int index=0;
		ll sum=INT_MIN;
		for(int i=0;i<n-k+1;i++){
			ll tmp=0;
			for(int j=i;j<i+k;j++){
				tmp+=a[j];
			}
			if(tmp>sum){
				sum=tmp;
				index=i;
			}
		}
		for(int i=index;i<index+k;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
