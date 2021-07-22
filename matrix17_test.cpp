#include<bits/stdc++.h>
using namespace std;
#define i64 long long
#define cin32(t) scanf("%d", &t)
#define cin64(t) scanf("%lld", &t)
#define endl '\n'
#define N 1000006
int multitest = 0;
int n,m, k;
int a[25][25];
int dp[25][25][25];
void input()
{
    cin>>n>>k;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cin>>a[i][j];
            for (int kk = 1;kk <= k+2;kk++)dp[i][j][kk] = 0;
        }
    }
}

void solve(){
    dp[1][1][a[1][1]] = 1;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            if (i == 1&&j == 1)continue;
            for (int m = k;m >= a[i][j];m--) {
                if (i-1 >=1&&m >= a[i-1][j])dp[i][j][m] += dp[i-1][j][m-a[i][j]];
                if (j-1 >= 1&&m >= a[i][j-1])dp[i][j][m] += dp[i][j-1][m-a[i][j]];
            }
        }
    }
    cout << dp[n][n][k] << endl;
  
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        input();
        solve();
    }

}
