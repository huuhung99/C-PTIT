#include<bits/stdc++.h>
using namespace std;
int t,a[100],n;
void Try(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i+1==n){
			for(int k=0;k<n;k++)
				cout<<a[k];
			cout<<" ";
		}
		else Try(i+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		Try(0);
		cout<<endl;
	}
	return 0;
}
