#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
//		map<char,int>
		int dem=0;
		string tmp="";
		for(int i=0;i<a.length();i++){
			if(a[i]>='0'&&a[i]<='9') tmp+=a[i];
			else{
				if(tmp.length()!=0){
					dem+=stoi(tmp);
					tmp="";
				}
			}
		}
		if(tmp.length()!=0){
			dem+=stoi(tmp);
		}
		cout<<dem<<endl;
	}
	return 0;
}
