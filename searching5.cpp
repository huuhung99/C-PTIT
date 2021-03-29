#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n,min=INT_MAX,min2=INT_MIN;cin>>n;
        int a[n],check=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min) min=a[i];
        }
        for(int i=0;i<n;i++){
            if(check==0&&a[i]>min) {
                min2=a[i];
                check=1;
            }
            if(min2>a[i]&&a[i]>min) min2=a[i];
        }
        if(min2!=INT_MIN)cout<<min<<" "<<min2;
        else cout<<-1;
        cout<<endl;
	}
	return 0;
}
