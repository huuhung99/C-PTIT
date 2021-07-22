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
		map<char,int> m;
		for(int i=0;i<len;i++){
			m[s[i]]++;
		}
		for(int i=0;i<len;i++){
			if(m[s[i]]>0){
				cout<<s[i]<<m[s[i]];
				m[s[i]]=-1;
			}
		}
		cout<<endl;
	}
	return 0;
}
