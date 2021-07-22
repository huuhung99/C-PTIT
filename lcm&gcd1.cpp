#include <bits/stdc++.h>
using namespace std;
int t;
long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long tmp=gcd(a,b);
        cout<<a*b/tmp<<" "<<tmp;
        cout<<endl;
    }
    
    return 0;
}
