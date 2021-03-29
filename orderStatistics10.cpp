#include<bits/stdc++.h>
using namespace std;
int t;
int FindMaxLength(int arr[], int n) {
	int a[n];
	for(int i-0;i<n;i++) a[i]=1;
	for (int i =1; i < n; i++) {
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]&&a[i]<a[j]+1)
				a[i]=a[j]+1;
		}
	}
    return *max_element(a,a+n); 
} 
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<FindMaxLength(a,n)<<endl;
	}
	return 0;
}
