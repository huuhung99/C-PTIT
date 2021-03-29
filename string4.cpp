#include <bits/stdc++.h> 
using namespace std; 
int t; 
int subsetModK(string s,int k){ 
	int dem=0,len=s.length(); 
	for(int i=0;i<len;i++){ 
		int n=0; 
		for(int j=i;j<len;j++){ 
			n=n*10+s[j]-'0'; 
			n=n%k; 
			if(n==0) dem++; 
		} 
	} 
	return dem; 
} 
int main(){ 
	cin>>t; 
	while(t--){ 
		string s;cin>>s; 
		cout<<subsetModK(s,8)-subsetModK(s,24)<<endl; 
	} 
	return 0; 
}
