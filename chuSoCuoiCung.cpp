#include<iostream>
using namespace std;
int t;
int hehe(int s){
	if(s<10) return s;
	int tmp=0;
	while(s){
		tmp+=s%10;
		s/=10;
	}
	return hehe(tmp);
}
int main(){
	cin>>t;
	while(t--){
		int s;cin>>s;
		cout<<hehe(s)<<endl;
	}
	return 0;
}
