#include<bits/stdc++.h>
using namespace std;
int t;
bool isPrime(int n){
    if(n<2) return false;
    if(n<4) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<n;i+=6)
        if(n%i==0||n%(i+2)==0) return false;
    return true;
}
int main(){
    cin>>t;
    while (t--)
    {        
        int n;
        cin>>n;
        if(n<3){
            cout<<0<<endl;
            continue;
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(__gcd(i,n)==1) count++;
        }
        if(isPrime(count)){
            cout<<1<<endl;
            continue;
        }
        cout<<0;
        cout<<endl;
    }    
    return 0;
}
