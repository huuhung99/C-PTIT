#include<bits/stdc++.h>
using namespace std;
int t;
//long long FindMaxSum(int arr[], int n) 
//{ 
//	if(n==1) return arr[0];
//  long long incl = arr[0]; 
//  long long excl = 0; 
//  long long excl_new; 
//  int i; 
//  
//  for (i = 1; i < n; i++) {
//     excl_new = (incl > excl)? incl: excl;
//     incl = excl + arr[i]; 
//     excl = excl_new; 
//  	} 
//   return ((incl > excl)? incl : excl); 
//} 
long long FindMaxSum(int arr[], int n) {
  	arr[2]+=arr[0];
	for (int i = 3; i < n; i++) {
		arr[i]+=max(arr[i-2],arr[i-3]);
	}
    return *max_element(arr,arr+n); 
} 
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
