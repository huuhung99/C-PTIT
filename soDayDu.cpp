#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string a;cin>>a;
		int b[10];
		for(int i=0;i<10;i++) b[i]=0;
		int kiemTra=0;
		for(int i=0;i<a.length();i++){
			if(a[0]=='0'){
				cout<<"INVALID"<<endl;
				kiemTra=1;
				break;
			}
			else if(a[i]<'0'||a[i]>'9'){
				cout<<"INVALID"<<endl;
				kiemTra=1;
				break;
			}
			else if(a[i]>='0'&&a[i]<='9'){
				b[a[i]-'0']=1;
			}
		}
		if(kiemTra==0){
			int check=1;
			for(int i=0;i<10;i++){
				if(b[i]==0){
					check=0;
					break;
				}
			}
			if(check==1){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}
