#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--)
    {
        string a; cin>>a;
        long long tongChan=0,tongLe=0; 
        int lenth=a.length();
        for(int i=0;i<lenth;i++){
            if(i%2==1) tongLe+=(a.at(i)-'0');
            else tongChan+=(a.at(i)-'0');
        }
        if((tongLe-tongChan)%11==0) cout<<1;
        else cout<<0;
        cout<<endl;
    }
    
    return 0;
}