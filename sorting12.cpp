#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		long long n,m,min=INT_MAX,max=INT_MIN;cin>>n>>m;    
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            if(max<tmp) max=tmp;
        }
        for(int i=0;i<m;i++){
            int tmp;cin>>tmp;
            if(min>tmp) min=tmp;
        }
        cout<<min*max<<endl;
	}
	return 0;
}
