#include <bits/stdc++.h> 
using namespace std; 
  
typedef long long ll; 
int t;
long long modBigNumber(string num, ll m) 
{
    ll tmp=0;
	for(int i=0;i<num.length();i++){
		tmp=(tmp*10+num[i]-48)%m;
		tmp=tmp%m;
	}
	return tmp;
} 
int main() 
{ 
    cin>>t;
    while(t--){
        string num;ll n,m;
        cin>>num>>n>>m;
        ll tmp=modBigNumber(num,m);
        ll result=1;
        while(n){
            if(n%2==1){
                result=(result*tmp)%m;
            }
            n/=2;
            tmp=(tmp*tmp)%m;
        }
        cout<<result<<endl;
    }  
    return 0; 
} 