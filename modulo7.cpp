#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int printEqualModNumbers (int a[], int n){
	map<int,int> b;
	for(int i=0;i<n;i++) b[a[i]]++;
	int max=b.rbegin()->first,min=b.begin()->first,dem=0;
	for(int i=1;i<=max-min;i++){
		int tmp=b.begin()->first%i;
		bool check=true;
		for(auto j:b){
			if(j.first%i!=tmp){
				check=false;
				break;
			}
		}
		if(check==true) dem++;
	}
	return dem;
//    int max=*max_element(a,a+n),dem=0;
//	for(int i=1;i<=max;i++){
//		int tmp=a[0]%i;
//		bool check=true;
//		for(int j=1;j<n;j++){
//			if(a[j]%i!=tmp){
//				check=false;
//				break;
//			}
//		}
//		if(check==true) dem++;
//	}
//	return dem;
}
int main(){
//	freopen("input.txt","w",stdout);
//	int t1=rand()%1000+10;
//	cout<<t1<<endl;
//	while(t1--){
//		int n1=3;
//		cout<<n1<<endl;
//		int a1[n1];
//		for(int i=0;i<n1;i++) {
//			a1[i]=rand()%20+10;
//			cout<<a1[i]<<" ";
//		}
//		cout<<endl;
//	}
//	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],max,dem=0;
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<printEqualModNumbers(a,n)<<endl;
	}
	return 0;
}
