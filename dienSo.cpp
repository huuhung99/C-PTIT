#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		sort(a,a+n);
		int min=a[0],max=a[n-1];
		int size=m.size();
		cout<<max-min-size+1<<endl;
	}
	return 0;
}
