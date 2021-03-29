#include<bits/stdc++.h>
using namespace std;
int t;
void check(string &a,string &b){
	if(a.length()==b.length()){
		if(b>a) swap(a,b);
	}
	if(a.length()<b.length()) swap(a,b);
}
string mul(string a,string b){
	int lengthA=a.length();
	int lengthB=b.length();
	while(lengthA<lengthB) {
		a="0"+a;lengthA++;
	}
	while(lengthB<lengthA) {
		b="0"+b;
		lengthB++;
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int nho=0;
	string result="";
	for(int i=0;i<lengthB;i++){
		int hieu=a[i]-b[i]-nho;
		if(hieu<0) {
			hieu+=10;
			result+=to_string(hieu);
			nho=1;
		}
		else{
			result+=to_string(hieu);
			nho=0;
		}
	}
	reverse(result.begin(),result.end());
	return result;
}
int main(){
	cin>>t;
	while(t--){
		string a,b;cin>>a>>b;
		check(a,b);
		cout<<mul(a,b)<<endl;
	}
	return 0;
}
