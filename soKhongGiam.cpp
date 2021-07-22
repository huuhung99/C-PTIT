#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	getchar();
	while(t--){
		char *s=new char[505];
		fgets(s,505,stdin);
		int len=strlen(s);
		s[len-1]='\0';
		if(is_sorted(s,s+len-1)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
