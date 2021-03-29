#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--)
    {
        string a; cin>>a;
        long long tong=0;
        int lenth=a.length()-1;
        tong+=(a.at(lenth)-'0');
        for(int i=0;i<lenth;i++){
            if(a.at(lenth-1-i)=='1'){
                if(i%4==0) tong+=2;
                else if(i%4==1)tong+=4;
                else if(i%4==2) tong+=3;
                else tong+=1;
            }            
        }
        if(tong%5==0) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }    
    return 0;
}