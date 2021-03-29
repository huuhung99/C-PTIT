#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n,k;cin>>n>>k;;   
        int a[n];     
        for(int i=0;i<n;i++)cin>>a[i];
        int b[k][2];
        for(int i=0;i<k;i++){
            cin>>b[i][0]>>b[i][1];
        }
        for(int i=0;i<k;i++){
            long long sum=0;
            for(int j=b[i][0]-1;j<b[i][1];j++){
                sum+=a[j];
            }
            cout<<sum<<endl;
        }
	}
	return 0;
}
