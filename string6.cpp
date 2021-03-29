#include<bits/stdc++.h>
using namespace std;
int t;
unsigned long long tongMin(string a,string b){
	int lena=a.length(),lenb=b.length();
	for(int i=0;i<lena;i++) if(a[i]=='6') a[i]='5';
	for(int i=0;i<lenb;i++) if(b[i]=='6') b[i]='5';
	return stoull(a)+stoull(b);
}
unsigned long long tongMax(string a,string b){
	int lena=a.length(),lenb=b.length();
	for(int i=0;i<lena;i++) if(a[i]=='5') a[i]='6';
	for(int i=0;i<lenb;i++) if(b[i]=='5') b[i]='6';
	return stoull(a)+stoull(b);
}
int main(){
	cin>>t;
	while(t--){
		string a,b;cin>>a>>b;
		cout<<tongMin(a,b)<<" "<<tongMax(a,b)<<endl;
	}
	return 0;
}
