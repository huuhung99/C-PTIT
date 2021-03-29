#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
        long long a[n];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++){
            long long tmp;cin>>tmp;
            if(tmp<n) a[tmp]=tmp;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
