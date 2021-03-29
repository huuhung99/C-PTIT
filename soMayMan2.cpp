#include<bits/stdc++.h>
using namespace std;
int t;
int check(string a){
	if(a.length()==1) {
		if(a[0]=='9') return 1;
		return 0;
	}
	long long sumOfnumber=0;
	for(int i=0;i<a.length();i++){
			sumOfnumber+=a[i]-48;
	}
	if(sumOfnumber==9) return 1;
	return check(to_string(sumOfnumber));
}
int main(){
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		long long sumOfNumber=0;
		for(int i=0;i<a.length();i++){
			sumOfNumber+=a[i]-48;
		}
		if(sumOfNumber%9==0&&sumOfNumber!=0) cout<<1<<endl;
		else cout<<0<<endl;
		cout<<check(a)<<endl;
	}
	return 0;
}
