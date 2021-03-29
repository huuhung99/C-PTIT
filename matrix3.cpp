#include<bits/stdc++.h>
using namespace std;
int t;
void matrix(int a[105][105],int n,int m){
	int dau=0,rong=m-1,dai=n-1,cnt=0;
	while(dau<rong||dau<dai){
		for(int i=dau;i<=rong;i++) {
			cout<<a[dau][i]<<" ";
//			if(cnt>n*m) break;
			cnt++;
		}
		if(cnt>=n*m) break;
		for(int i=dau+1;i<=dai;i++) {
			cout<<a[i][rong]<<" ";
//			if(cnt>n*m) break;
			cnt++;
		}
		if(cnt>=n*m) break;
		for(int i=rong-1;i>=dau;i--) {
			cout<<a[dai][i]<<" ";
//			if(cnt>n*m) break;
			cnt++;
		}
		if(cnt>=n*m) break;
		for(int i=dai-1;i>dau;i--) {
			cout<<a[i][dau]<<" ";
//			if(cnt>n*m) break;
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
		int a[105][105];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		matrix(a,n,m);
		cout<<endl;
	}
	return 0;
}
