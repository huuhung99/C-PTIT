#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
        int count=0;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            if(tmp==k)count++;
        }
        if(count==0)cout<<-1;
        else cout<<count;
        cout<<endl;
	}
	return 0;
}
