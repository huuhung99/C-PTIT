#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	int t;cin>>t;
	while(t--){
		string n;cin>>n;
		int du=n[0]-'0';
		for(int i=1;i<n.length();i++){
			du=(du*10+n[i]-'0')%11;
		}
		if(du==0)cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
