#include<bits/stdc++.h>
using namespace std;
int t;
// ko nen dung string
bool check(int a,int b){
//	int lengtha=to_string(a).length();
//	int lengthb=to_string(b).length();
//	if(a*pow(10,lengthb)+b<b*pow(10,lengtha)+a) return false;
//	return true;
//	string ab="",ba="";
//	ab=to_string(a)+to_string(b);
//	ba=to_string(b)+to_string(a);
//	return ab<ba?false:true;
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[100005];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,check);
		for(int i=0;i<n;i++) 
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}
