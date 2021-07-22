#include<bits/stdc++.h>
using namespace std;
int t;
void matrix(int a[105][105],int b[],int n,int m){
	int dau=0,rong=m-1,dai=n-1,cnt=0;
	while(dau<rong||dau<dai){
		for(int i=dau;i<=rong;i++) {
			b[cnt]=a[dau][i];
			cnt++;
		}
		if(cnt>=n*m) break;
		for(int i=dau+1;i<=dai;i++) {
			b[cnt]=a[i][rong];
			cnt++;
		}
		if(cnt>=n*m) break;
		for(int i=rong-1;i>=dau;i--) {
			b[cnt]=a[dai][i];
			cnt++;
		}
		if(cnt>=n*m) break;
		for(int i=dai-1;i>dau;i--) {
			b[cnt]=a[i][dau];
			cnt++;
		}
		if(cnt>=n*m) break;
		dai--;
		rong--;
		dau++;
/*
10
4 5
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
3 4
01 02 03 04
05 06 07 08
09 10 11 12
*/
	}
}
int main(){
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[105][105],b[n*m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		matrix(a,b,n,m);
		for(int i=0;i<n*m;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
