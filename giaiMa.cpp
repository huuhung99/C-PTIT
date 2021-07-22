#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	getchar();
	while(t--){
		char *s=new char[105];
		fgets(s,105,stdin);
		int len=strlen(s)-1;
		s[len]='\0';
		for(int i=0;i<len;i++){
			if(s[i]>'0'&&s[i]<='9'){
				for(int j=0;j<(s[i]-'0');j++){
					cout<<s[i-1];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
