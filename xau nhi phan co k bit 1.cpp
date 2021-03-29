#include<bits/stdc++.h>
using namespace std;
int t;
int check(unsigned long x,unsigned long n){
	char count=0;
	for(int i=0;i<n;i++){
		count+=(x>>i)&1;
	}
	return count;
}
void display(unsigned long x,unsigned long n){
	for(int i=0;i<n;i++) cout<<((x>>i)&1);
	cout<<endl;
}
int main(){
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(unsigned long i=0;i<1<<n;i++){
			if(check(i,n)==k) display(i,n);
		}
	}
	return 0;
}
