#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[20][20];
int b[20][20];
void input(){
    cin>>n>>m;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for (int i = 2;i <= n;i++) {
        for (int j = 1;j <= m;j++)b[i][j] += b[i-1][j];
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        int ans = 0;
    for (int i = 1;i <= n;i++) {
        for (int j = i;j <= n;j++) {
            int k = 0;
            for (int q = 1;q <=m;q++) {
                int s = b[j][q]-b[i-1][q];
                if (s == j-i+1)k++;
            } 
            ans = max(ans, (j-i+1) *k);
            
        }
    }
    cout << ans << endl;
    }
	return 0;
}


