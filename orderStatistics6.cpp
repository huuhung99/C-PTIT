#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int *a = new int[n];
		int max = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= n-1; i++){
			for(int j = i+1; j <= n; j++){
				if(a[j] >= a[i]){
					int m = j - i;
					if(m > max) max = m;
				}
			}
		}
		cout << max << endl;
	}
}


