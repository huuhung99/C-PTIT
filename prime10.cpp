#include<bits/stdc++.h>
using namespace std;
int t,n;
bool isprime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0) return false;
	return true;
}
string hihi(int n){
    string tmp="";
    int i=2;
    while(i*i<=n){
        if(n%i==0){
            tmp+=to_string(i);
            n/=i;
        }
        else i++;
    }
    if(n>1) tmp+=to_string(n);
    return tmp;
}
int sumOfNumber(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int sumOfString(string a){
    int sum=0;
    for(int i=0;i<a.length();i++){
        sum+=(a[i]-'0');
    }
    return sum;
}
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        if(isprime(n)==false&&sumOfNumber(n)==sumOfString(hihi(n))){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
