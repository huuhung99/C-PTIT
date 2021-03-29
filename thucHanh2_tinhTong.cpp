#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int t;
ull sumMin(ull a,ull b){
	string a1=to_string(a);
	for(int i=0;i<a1.length();i++){
		if(a1[i]=='6') a1[i]='5';
	}
	string b1=to_string(b);
	for(int i=0;i<b1.length();i++){
		if(b1[i]=='6') b1[i]='5';
	}
//	cout<<a1<<" "<<b1<<endl;
	return stoull(a1)+stoull(b1);
}
ull sumMax(ull a,ull b){
	string a1=to_string(a);
	for(int i=0;i<a1.length();i++){
		if(a1[i]=='5') a1[i]='6';
	}
	string b1=to_string(b);
	for(int i=0;i<b1.length();i++){
		if(b1[i]=='5') b1[i]='6';
	}
//	cout<<a1<<" "<<b1<<endl;
	return stoull(a1)+stoull(b1);
}
int main(){
	cin>>t;
	while(t--){
		ull a,b;
		cin>>a>>b;
		cout<<sumMin(a,b)<<" "<<sumMax(a,b)<<endl;
	}
	return 0;
}
