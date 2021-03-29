#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	getchar();
	while(t--){
		map<string,int> a,b;
		char a1[205],b1[2005];
		fgets(a1,205,stdin);
		fgets(b1,205,stdin);
		a1[strlen(a1)-1]=32;
		b1[strlen(b1)-1]=32;
		char *p=strtok(a1," ");
		while(p!=NULL){
			string tmp=string(p);
			a[tmp]++;
			p=strtok(NULL," ");
		}
		p=strtok(b1," ");
		while(p!=NULL){
			string tmp=string(p);
			b[tmp]++;
			p=strtok(NULL," ");
		}
		for(auto i:a){
			if(b[i.first]==0) cout<<i.first<<" ";
		}
		cout<<endl;
	}
	return 0;
}
