#include<bits/stdc++.h>
using namespace std;
string isprim(int n){
	if(n<2) return "NO";
	if(n<4) return "YES";
	if(n%2==0||n%3==0) return "NO";
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0)
			return "NO";
	return "YES";
}
int main(){
	int n;cin>>n;
	cout<<isprim(n);
}
