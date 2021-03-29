#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,cnt=0;
void Try(int a[],int dau,int cuoi){
	if(dau==cuoi||cuoi-dau==1&&a[cuoi]==a[dau]) return;
	if(a[dau]<a[cuoi]){
		cnt++;
		dau++;
		a[dau]+=a[dau-1];
		Try(a,dau,cuoi);
	}
	else if(a[dau]==a[cuoi]){
		Try(a,dau+1,cuoi-1);
	}
	else {
		cuoi--;
		a[cuoi]=a[cuoi]+a[cuoi+1];
		cnt++;
		Try(a,dau,cuoi);
	}
}
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		Try(a,0,n-1);
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}
