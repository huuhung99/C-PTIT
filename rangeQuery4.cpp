#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long max=INT_MIN,maxtmp=0;
		for(int i=0;i<n;i++){
			maxtmp+=a[i];
			if(max<maxtmp) max=maxtmp;
			if(maxtmp<0) maxtmp=0;
		}
		cout<<max<<endl;
	}
	return 0;
}
