#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;
        int a[n],result=INT_MAX;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            int sum=a[i];
            for(int j=i+1;j<n;j++){
                if(abs(a[i]+a[j])<abs(result)) result=a[i]+a[j];
            }
        }
        cout<<result;
        cout<<endl;
	}
	return 0;
}
