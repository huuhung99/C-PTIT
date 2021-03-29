#include<bits/stdc++.h>
using namespace std;
void fibo(long long f[]){
	f[0] = 0;
	f[1] = f[2] = 1;
	for(int i = 3; i <= 92; i++){
		f[i] = f[i-1] + f[i-2];
	} 
}
main(){
	int t;
	cin >> t;
	long long n;
	long long f[10000];
	fibo(f);
	while(t--){
		cin >> n;
		int check = 0;
		for(int i = 0; i <= 92; i++){
			if(f[i] == n){
				check = 1;
				break;
			}
		}
		if(check == 1) cout << "YES\n";
		else cout <<"NO\n";
	}
}
 
