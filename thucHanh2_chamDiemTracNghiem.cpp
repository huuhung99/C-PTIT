#include<bits/stdc++.h>
using namespace std;
int t;
string de101[]={"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"};
string de102[]={"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"};
int main(){
	cin>>t;
	while(t--){
		string a[16];
		for(int i=0;i<16;i++){
			cin>>a[i];
		}
		if(a[0]=="101"){
			int dem=0;
			for(int i=1;i<16;i++){
				if(a[i]==de101[i-1]) dem++;
			}
			printf("%0.2f\n",dem/(1.0*15)*10.0);
		}
		else{
			int dem=0;
			for(int i=1;i<16;i++){
				if(a[i]==de102[i-1]) dem++;
			}
			printf("%0.2f\n",dem/(1.0*15)*10.0);
		}
	}
	return 0;
}
