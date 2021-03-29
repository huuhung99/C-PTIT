#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[100]={0};
        long long tmp=n,i=2;
        int dem=0;
        while(i*i<=tmp){
            if(n%i==0){
                n/=i;
                a[dem++]=i;
            }
            else i++;
        }
        if(n>=2) a[dem++]=n;
        if(k>=0&&k<=dem) cout<<a[k-1]<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}
