#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> m[n];
		int len=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int tmp;cin>>tmp;
				m[len][tmp]++;
			}
			len++;
		}
		bool check=true;
		int dem=0;
		for(auto i:m[0]){
			for(int j=1;j<len;j++){
				if(m[j][i.first]==0){
					check=false;
					break;
				}
			}
			if(check==true) dem++;
			check=true;
		}
		cout<<dem<<endl;
	}
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std; 
//void solve() { 
//	int n; cin >> n; 
//	int a[100][100]; 
//	for (int i = 0; i < n; i++) { 
//		for (int j = 0; j < n; j++) 
//			cin >> a[i][j]; 
//	} 
//	for (int i = 0; i < n; i++) 
//		sort(a[i], a[i] + n); 
//	int b[100] = {}, f = 0, count = 0; 
//	for (b[0] = 0; b[0] < n; b[0]++) { 
//		int value = a[0][b[0]];
//		bool check = true; 
//		for (int i = 1; i < n; i++) { 
//			while (b[i] < n && a[i][b[i]] <= value) { 
//			b[i]++;
//			} 
//			if (a[i][b[i] - 1] != value) { 
//				check = false; 
//			} 
//			if (b[i] == n) { 
//				f = 1; break; 
//			} 
//		} 
//		if (check) count++; 
//		if (f == 1) break; 
//	} 
//	cout << count << endl;
//} 
//int main() { 
//	int t; cin >> t; 
//	while (t--) solve(); 
//	return 0; 
//} 
