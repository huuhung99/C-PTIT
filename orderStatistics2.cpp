#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
        int max=-1;
        for(int i=0;i<n;i++) {
            int tmp;cin>>tmp;
            if(tmp>max) max=tmp;
        }
		cout<<max<<endl;
	}
	return 0;
}
