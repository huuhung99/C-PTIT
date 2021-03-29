#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;
        int check=0;
        for(int i=0;i<n-1;i++){
            int tmp;cin>>tmp;
            if(tmp!=i+1&&check==0) {
                cout<<i+1;
                check=1;
            }
        }
        cout<<endl;
	}
	return 0;
}
