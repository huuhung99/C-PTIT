#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
		string str="";
		int dem=0;
		for(int i=0;i<a.length();i++){
			if(a[i]>='0'&&a[i]<='9') dem+=a[i]-'0';
			else str+=a[i];
		}
		sort(str.begin(),str.end());
		cout<<str<<dem<<endl;
	}
	return 0;
}
