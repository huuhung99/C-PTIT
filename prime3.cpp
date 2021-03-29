#include <bits/stdc++.h>
using namespace std;
int t;
int prime(int n){
    if(n<2) return 0;
    if(n<4) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
int main(){
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<2<<" ";
        for(int i=3;i<=n;i+=2){
            if(prime(i)==1) cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}   