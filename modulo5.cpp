#include <bits/stdc++.h> 
using namespace std; 
  
typedef long long ll; 
int t;
long long modBigNumber(string num, ll m) 
{
    vector<int> vec; 
    ll mod = 0; 
    for (int i = 0; i < num.size(); i++) { 
           
        int digit = num[i] - '0'; 
        mod = mod * 10 + digit; 
        int quo = mod / m; 
        vec.push_back(quo); 
        mod = mod % m;         
    } 
    return mod;
} 
int main() 
{ 
    cin>>t;
    while(t--){
        string num;ll m;
        cin>>num>>m;
        cout<<modBigNumber(num, m)<<endl;
    }  
    return 0; 
} 