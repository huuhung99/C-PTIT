#include<bits/stdc++.h>
using namespace std;
int t;
typedef struct{
	int so1;
	int so2;
}tmp;
bool check(tmp a,tmp b){
	return a.so1<b.so1;
}
int main(){
	int t;cin>>t;
	tmp mang[t];
	for(int i=0;i<t;i++){
		cin>>mang[i].so1>>mang[i].so2;
	}
	sort(mang,mang+t,check);
	int result=mang[0].so1+mang[0].so2;
	for(int i=1;i<t;i++){
		if(result>mang[i].so1){
			result+=mang[i].so2;
		}
		else{
			result=mang[i].so1+mang[i].so2;
		}
	}
	cout<<result<<endl;
	return 0;
}
