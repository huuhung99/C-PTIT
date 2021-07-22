#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto i:s){
            if(mp[i]==1) cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
