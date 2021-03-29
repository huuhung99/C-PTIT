#include<bits/stdc++.h>
using namespace std;
int t;
typedef struct{
    int value;
    int index;
}number;
bool check(number a, number b){
    return a.value<b.value;
}
int main(){
    cin>>t;
    while(t--){
        int n;cin>>n;
        number a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].value;
            a[i].index=i;
        }
        sort(a,a+n,check);
        int dem=0;
        for(int i=0;i<n;i++){
            if(a[i].index!=i) dem++;
            cout<<a[i].value<<" ";
        }
        cout<<endl;
        if(dem%2==0) cout<<dem/2;
        else cout<<dem/2+1;
        cout<<endl;
    }
    return 0;
}