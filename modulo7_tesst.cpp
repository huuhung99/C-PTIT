#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],max,min,dem=0;
		for(int i=0;i<n;i++)cin>>a[i];
		max=*max_element(a,a+n);
		min=*min_element(a,a+n);
		for(int i=1;i<=max-min;i++){
			int tmp=a[0]%i;
			bool check=true;
			for(int j=1;j<n;j++){
				if(a[j]%i!=tmp){
					check=false;
					break;
				}
			}
			if(check==true) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
