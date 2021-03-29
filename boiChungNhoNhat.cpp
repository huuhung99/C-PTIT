#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
#include <fstream>
#include <ctime>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(LL i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define FOD(i,a,b) for(int i=a;i>b;i--)
#define FORV(i,a) for(typeof(a.begin()) i = a.begin(); i != a.end(); i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl
 
using namespace std;
 
typedef pair<int,int>II;
typedef pair<int,II>PII;
template<class T> T gcd(T a, T b) {T r; while(b!=0) {r=a%b;a=b;b=r;} return a;}
template<class T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> int getbit(T s, int i) { return (s >> i) & 1; }
template<class T> T onbit(T s, int i) { return s | (T(1) << i); }
template<class T> T offbit(T s, int i) { return s & (~(T(1) << i)); }
 
const double PI = 2*acos(0.0);
const double eps = 1e-9;
const int infi = 1e9;
const LL Linfi = (LL) 1e18;
const LL MOD = 10007;
#define maxn 70005
 
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19};
int somu[] = {9, 6, 4, 4, 3, 3, 3, 3};
 
int dp[105][maxn][2];
int n, a[maxn];
II P[maxn];
int mu[11][11];
int d[11];
vector<int> T[maxn];
 
int find_state(int n2, int n3, int n5, int n7, int n11, int n13, int n17, int n19){
	return n2 * d[1] + n3 * d[2] + n5 * d[3] + n7 * d[4] + n11 * d[5] + n13 * d[6]
				+ n17 * d[7] + n19 * d[8];
}
 
vector<int> all_elements(int x){
	vector<int> res;
	for(int i = 1; i <= 8; i++){
		res.pb(x / d[i]);
		x %= d[i];
	}
	return res;
}
 
bool is_prime(int n){
    if(n == 2 || n == 3) return true;
	FOR(i,2,sqrt(n)) if(n % i == 0) return false;
	return true;
}
 
void solve(){
    memset(dp, 0, sizeof(dp));
	cin >> n;
	FOR(i, 1, n) cin >> a[i];
	FOR(i, 1, n){
		bool flag = false;
		for(int j = 20; j <= 500; j++) if(is_prime(j) && a[i] % j == 0){
			flag = true;
			P[i].fi = j; P[i].se = a[i] / j;
			break;
		}
		if(!flag) {
            P[i].fi = 1; P[i].se = a[i];
		}
	}
 
	sort(P+1, P+n+1);
	dp[0][0][0] = 1;
	FOR(i,1,n) {
        int u = P[i].se; //cout << P[i].fi << " " << P[i].se << endl;
        int r[8];
        memset(r, 0, sizeof(r));
        FOR(h,0,7){
            while(u % prime[h] == 0){
                u /= prime[h];
                r[h]++;
            }
        }
 
        if(P[i-1].fi != P[i].fi){
            FORD(state, d[0]-1, 0) dp[i][state][0] = (dp[i-1][state][0] + dp[i-1][state][1]) % MOD;
        }
        else{
            FORD(state, d[0]-1, 0) {
                dp[i][state][0] = dp[i-1][state][0];
                dp[i][state][1] = dp[i-1][state][1];
            }
        }
 
        FORD(state, d[0]-1, 0) FORD(k,1,0) if(dp[i-1][state][k]){
            int ret = 1, rr[8];
            FOR(h,0,7){
                int tmp = max(0, r[h] - T[state][h]);
                rr[h] = max(r[h], T[state][h]);
                ret = (ret * mu[h][tmp]) % MOD;
            }
            if((P[i-1].fi != P[i].fi))
                ret = (ret * P[i].fi) % MOD;  /// delta lcm
            if(P[i-1].fi == P[i].fi && k == 0){
                ret = (ret * P[i].fi) % MOD;
            }
 
            int new_state = find_state(rr[0], rr[1], rr[2], rr[3], rr[4], rr[5], rr[6], rr[7]); /// new_state
            dp[i][new_state][1] = (dp[i][new_state][1] + ret * dp[i-1][state][k]) % MOD;
            //cout << state << " " << k << "  " << ret*dp[i-1][state][k] << " " << new_state << endl;
        }
	}
 
	int res = 0;
	FOR(state, 0, d[0]){
	    res = (res + dp[n][state][0]);
	    res = (res + dp[n][state][1]);
	    if(res > infi) res %= MOD;
	    //if(dp[n][state][0]) cout << state << " : " << dp[n][state][0] << endl;
	    //if(dp[n][state][1]) cout << state << " < " << dp[n][state][1] << endl;
	}
	cout << (res + MOD - 1) % MOD << endl;
}
 
 
int main(){
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
    #endif
 
    memset(mu, 0, sizeof(mu));
    for(int i = 0; i < 8; i++){
    	mu[i][0] = 1;
    	for(int j = 1; j < 11; j++) mu[i][j] = mu[i][j - 1] * prime[i] % MOD;
    }
    d[8] = 1;
    for(int i = 7; i >= 0; i--) d[i] = d[i + 1] * somu[i];
 
    FOR(i,0,d[0]-1) T[i] = all_elements(i);
 
    //FOR(i,0,8) cout << d[i] << " "; cout << endl;
    int test;
    cin >> test;
    FOR(itest, 1, test){
    	cout << "Case " << itest << ": ";
    	solve();
    }
 
    return 0;
}
