#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int i;
	int j;
	int value;
}arr;
bool check(arr a,arr b){
	int sumA=a.i+a.j;
	int sumB=b.i+b.j;
	if(sumA==sumB){
		if(sumA%2==0){
			return a.j<b.j;
		}
		return a.j>b.j;
	}
	return sumA<sumB;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,count=0;cin>>n>>m;
		arr a[n*m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[count].value;
				a[count].i=i;
				a[count++].j=j;
			}
		}
		sort(a,a+n*m,check);
		for(int i=0;i<n*m;i++) cout<<a[i].value<<" ";
		cout<<endl;
//		00 01 02 03 10 11 12 13 20 21 22 23 30 31 32 33
//		00 01 10 20 11 02 03 12 21 30 31 22 13 23 32 33
	}
}
