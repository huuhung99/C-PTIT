#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
	return (a/__gcd(a,b))*b;
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int result=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(__gcd(a[i],a[j])==1){
				cout<<a[i]<<" "<<a[j]<<endl;
			}
		}
	}
}
