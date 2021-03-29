#include <bits/stdc++.h>
using namespace std;
int t;
bool prime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}
int main(){
    cin>>t;
    while (t--)
    {
        int n,i=3;
        cin>>n;
        if(n>3) cout<<4<<" ";
        while(i*i<=n){
        	if(prime(i)) cout<<i*i<<" ";
        	i+=2;
		}
		cout<<endl;
    }
    
    return 0;
}
