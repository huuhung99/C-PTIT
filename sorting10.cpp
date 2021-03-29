#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		string a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		string tmp="";
		for(int i=0;i<n;i++){
			tmp+=a[i];
		}
		sort(tmp.begin(),tmp.end());
		cout<<tmp[0]<<" ";
		for(int i=1;i<tmp.length();i++){
			if(tmp[i]!=tmp[i-1]) cout<<tmp[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
