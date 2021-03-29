#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
		int a1[10005],count=0;
		string tmp="";
		for(int i=0;i<a.length();i++){
			if(a[i]>='0'&&a[i]<='9') tmp+=a[i];
			else{
				if(tmp.length()!=0){
					a1[count++]=stoi(tmp);
					tmp="";
				}
			}
		}
		if(tmp.length()!=0){
			a1[count++]=stoi(tmp);
		}
		sort(a1,a1+count);
		cout<<a1[count-1]<<endl;
	}
	return 0;
}
