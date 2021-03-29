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
        // char a[10005];fgets(a,sizeof(a),stdin);
        // int length=strlen(a)-1;
        int dem=length;
        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){
                if(a[i]==a[j]) dem++;
            }
        }
        cout<<dem<<endl;
    }    
    return 0;
}