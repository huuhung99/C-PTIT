#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[100][100]={0};
        int b[100][100]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(a[i][j]==1){// i=1,j=2
                    for(int m=0;m<n;m++)b[m][j]=1;
                    for(int m=0;m<k;m++) b[i][m]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}