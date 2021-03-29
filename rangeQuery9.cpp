#include<bits/stdc++.h>
using namespace std;
int t,cnt,a[1005];
void Try(int a[],int n){
	bool check=true;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			cnt++;
			a[i]-=1;
		}
		if(a[i]!=0) check=false;
	}
	for(int i=0;i<n;i++){
		a[i]/=2;
	}
	if(check==true) return;
	cnt++;
	Try(a,n);
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		Try(a,n);
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}
