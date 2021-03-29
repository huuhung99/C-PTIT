#include<bits/stdc++.h>
using namespace std;
int t;
bool isprime(int n){
	if(n==2||n==3||n==5||n==7) return true;
	return false;
}
string intToString(long long a){
	string result="";
	while(a){
		int tmp=a%10;
		if(tmp>1){
			if(isprime(tmp)) result+=(char)(tmp+'0');
			else {
				if(tmp==4) result+="322";
				else if(tmp==6) result+="53";
				else if(tmp==8) result+="7222";
				else result+="7332";
			}
		}
		a/=10;
	}
	sort(result.begin(),result.end(),greater<char>());
//	return reverse(result.begin(),result.end());
	return result;
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;long long a;cin>>a;
		cout<<intToString(a);
		cout<<endl;
	}
	return 0;
}
