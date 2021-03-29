#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
        int check=0;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            if(tmp==k&&check==0) {
                cout<<i+1;
                check=1;
            }
        }
        if(check==0) cout<<-1;
        cout<<endl;
	}
	return 0;
}
