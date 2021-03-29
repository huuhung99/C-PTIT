#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;
        int a[100005]={0},min=INT_MAX,max=INT_MIN,dem=0;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            a[tmp]=1;
            if(tmp>max) max=tmp;
            if(tmp<min) min=tmp;
        }
        for(int i=min+1;i<max;i++){
            if(a[i]==0) dem++;
        }
        cout<<dem;
        cout<<endl;
	}
	return 0;
}
