#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
	freopen("input.txt","r",stdin);
	ll t;
	cin >> t;
	while(t--){
		ll n;
		long long a[100001];
		cin >> n;
		ll min;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		min=*min_element(a,a+n);
		ll gcd = 0;
		for(int i = 0; i < n; i++){
			a[i] = a[i] - min;
			gcd = __gcd(gcd, a[i]);
		}
		int dem = 0;
		for(int i = 1; i*i <= gcd; i++){
			if(gcd % i == 0){
				if(i < gcd/i) dem = dem + 2;
				else dem = dem + 1;
			}
		}
		cout << dem << endl;
	}
}


