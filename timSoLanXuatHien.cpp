#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		map<int,int> a;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			a[tmp]++;
		}
		cout<<a[k]<<endl;
	}
	return 0;
}
