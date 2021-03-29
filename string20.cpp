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
        int length=a.length(),check=0;
        string result="";
        string tmp="";
        for(int i=length-1;i>=0;i--){
            if(a[i]==32&&check==1) {
                result+=a[i];
                reverse(tmp.begin(),tmp.end());
                result+=tmp;
                tmp="";
            }
            else if(a[i]==32&&check==0){
                reverse(tmp.begin(),tmp.end());
                result+=tmp;
                tmp="";
                check=1;
            }
            else tmp+=a[i];
        }
        result+=" ";
        reverse(tmp.begin(),tmp.end());
        result+=tmp;
        cout<<setw(length-1)<<result;
        cout<<endl;
    }    
    return 0;
}
