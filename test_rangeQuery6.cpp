#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],c[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			c[i]=a[i];
		}
		int maxSumOfsubset=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[j]<a[i]){
					c[i]=max(c[i],c[j]+a[i]);
				}
			}
			maxSumOfsubset=max(maxSumOfsubset,c[i]);
		}
		cout<<maxSumOfsubset<<endl;
	}
	return 0;
}
