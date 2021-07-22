#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	getchar();
	while(t--){
		char *a=new char[105];
		fgets(a,105,stdin);
		int len=strlen(a)-1;
		a[len]='\0';
		if(prev_permutation(a,a+len)) cout<<a<<endl;
		else cout<<"-1\n";
	}
	return 0;
}
