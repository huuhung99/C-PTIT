#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[105][105],b[n*m],count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		}
		int dau=0,dai=n-1,rong=m-1;
		while(dau<dai||dau<rong){
			for(int i=dau;i<=rong;i++){
				b[count++]=a[dau][i];
			}
			if(count>=n*m) break;
			for(int i=dau+1;i<=dai;i++){
				b[count++]=a[i][rong];
			}
			if(count>=n*m) break;
			for(int i=rong-1;i>=dau;i--){
				b[count++]=a[dai][i];
			}
			if(count>=n*m) break;
			for(int i=dai-1;i>dau;i--){
				b[count++]=a[i][dau];
			}
			if(count>=n*m) break;
			dau++;
			dai--;
			rong--;
		}
		for(int i=0;i<count;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
