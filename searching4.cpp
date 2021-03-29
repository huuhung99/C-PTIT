#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            if(tmp==k) {
                cout<<i+1;
            }
        }
        cout<<endl;
	}
	return 0;
}
