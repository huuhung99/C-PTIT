#include<bits/stdc++.h>
using namespace std;
int t;
void solve(){
	int n,k;cin>>n>>k;
		map<int,int> m;
		int m1[k];
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			m[tmp]++;
		}
		for(int i=0;i<k;i++) cin>>m1[i];
		for(int j=0;j<k;j++){
			for(int i=0;i<m[m1[j]];i++){
				cout<<m1[j]<<" ";
			}
			m[m1[j]]=0;
		}
		for(auto mp:m){
			for(int i=0;i<mp.second;i++) cout<<mp.first<<" ";
		}
		cout<<endl;
}
//void solve(){
//	int n,k;cin>>n>>k;
//	int *a=new int[1000005],b[k];
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
//	for(int i=0;i<n;i++){
//		int tmp;cin>>tmp;
//		a[tmp]++;
//	}
//	for(int i=0;i<k;i++){
//		cin>>b[i];
//	}
//	for(int i=0;i<k;i++){
//		for(int j=0;j<a[b[i]];j++){
//			cout<<b[i]<<" ";
//		}
//		a[b[i]]=0;
//	}
//	for(int i=0;i<1000005;i++)
//		for(int j=0;j<a[i];j++)
//			cout<<i<<" ";
//	cout<<endl;
//}
int main(){
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
