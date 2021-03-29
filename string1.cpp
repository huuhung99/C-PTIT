#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--)
    {
        string a; cin>>a;int k;cin>>k;
        int lenth=a.length();
        if(lenth<27){
            cout<<0<<endl;
            continue;
        }
        else if(k>25){
            cout<<1<<endl;
            continue;
        }
        set<char> tmp;
        for(int i=0;i<lenth;i++){
            tmp.insert(a.at(i));
        }
        int sizeSet=tmp.size();
        // cout<<"size set:"<<sizeSet<<"\nlength a:"<<lenth<<"\nk="<<k<<endl;
        if((k+sizeSet-26)>=0){
            cout<<1;
        }
        else cout<<0;
        cout<<endl;
    }
    
    return 0;
}