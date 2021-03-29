#include<bits/stdc++.h>
using namespace std;
int t;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++){
			if(i%2==1){
				if(a[i]<a[i-1]){
					swap(a[i],a[i-1]);
				}
			}
			else{
				if(a[i]>a[i-1]){
					swap(a[i],a[i-1]);
				}
			}
		}
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
