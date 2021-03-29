#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    getchar();
    while (t--)
    {        
        // getchar();
        string a;
        getline(cin,a);
        int length=a.length();
        if(a[length-2]=='8'&&a[length-1]=='6') cout<<1;
        else cout<<0;
        cout<<endl;
    }    
    return 0;
}
