#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,dem=0;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<n;i++){
			if(a[i]!=0&&a[i]==a[i-1]){
				a[i-1]*=2;
				a[i]=0;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]!=0) cout<<a[i]<<" ";
			else dem++;
		}			
		for(int i=0;i<dem;i++) cout<<"0 ";
		cout<<endl;
	}
	return 0;
}
