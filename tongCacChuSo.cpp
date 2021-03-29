#include<bits/stdc++.h>
using namespace std;
int sumOfnumbers(int n){
    if(n==0) return 0;
    return n%10+sumOfnumbers(n/10);
}
bool isprime(int n){
    if(n<2) return false;
    if(n<4) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0)
            return false;
    return true;
}
long long daoNguoc(long long n){
    long long tmp=0;
    while(n){
        tmp=tmp*10+n%10;
        n/=10;
    }
    return tmp;
}
long long dem( int n){
    long long dem=0;
    for(int i=pow(10,n-1);i<pow(10,n);i++){
        string tmp=to_string(i);
        if(isprime(i)&&isprime(daoNguoc(i))&&isprime(sumOfnumbers(i))){
            bool check=true;
            // for(int i=0;i<tmp.length();i++){
            //     if(isprime(tmp[i]-'0')==false){
            //         check=false;
            //         break;
            //     }
            // }
            if(check==true){
                cout<<i<<" ";
                dem++;
            }
        }
    }
    return dem;
}
int main(){
    int n;cin>>n;
    cout<<dem(n);
    return 0;
}
