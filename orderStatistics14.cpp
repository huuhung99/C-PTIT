#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> m;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			m[a[i]]++;
		}
		for(int i=0;i<n;i++){
			auto tmp=m.upper_bound(a[i]);
			if((*tmp).second==0) cout<<"_ ";
			else cout<<(*tmp).first<<" ";
		}
		cout<<endl;
	}
	return 0;
}
