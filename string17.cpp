#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--)
    {    
        getchar();
        string a;cin>>a;
        int length=a.length();
        char str[100005];
        memset(str,-1,sizeof(str));
        for(int i=0;i<length;i++){
            int tmp=a[i];
            if(str[tmp]==-1) str[tmp]=1;
            else if(str[tmp]==1) str[tmp]=2;
        }
        for(int i=0;i<length;i++){
            int tmp=a[i];
            if(str[tmp]==1) cout<<a[i];
        }
        cout<<endl;
    }    
    return 0;
}
