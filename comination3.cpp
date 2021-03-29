#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	ios::sync_with_stdio(false);
    cin.tie();
	cin>>t;
	while(t--){
		cin>>n;
		string a="";
		for(int i=1;i<=n;i++) a+=(i+48);
		cout<<a<<" ";
		while(next_permutation(a.begin(),a.end())){
			cout<<a<<" ";
		}
		cout<<endl;
	}
	return 0;
}
