#include<bits/stdc++.h>
using namespace std;
int t;
long long maxSum(int a[],int b[],int n,int m){
	long long max1=b[0],max2=a[0];
	cout<<max1<<" "<<max2<<endl;
	if(n>=m){
		for(int i=1;i<m;i++){
			int tmp=max(a[i],b[i]);
			max1+=tmp;
			max2+=tmp;
			cout<<max1<<" "<<max2<<endl;
		}
		for(int i=m;i<n;i++){
			max1+=a[i];
			cout<<max1<<" "<<max2<<endl;
		}
		return max(max1,max2);
	}
	for(int i=1;i<n;i++){
			max1+=max(a[i],b[i]);
			max2+=max(a[i],b[i]);
		}
		for(int i=n;i<m;i++){
			max2+=b[i];
		}
	return max(max1,max2);
}
int maxPathSum(int ar1[], int ar2[], int m, int n){
    int i = 0, j = 0;
    int result = 0, sum1 = 0, sum2 = 0;
    while (i < m && j < n) {
        if (ar1[i] < ar2[j])
            sum1 += ar1[i++];
        else if (ar1[i] > ar2[j])
            sum2 += ar2[j++];
 
        else {
            result += max(sum1, sum2);
            sum1 = 0, sum2 = 0;
            int temp = i;
            while (i < m && ar1[i] == ar2[j])
                sum1 += ar1[i++];
 
            while (j < n && ar1[temp] == ar2[j])
                sum2 += ar2[j++];
 
            result += max(sum1, sum2);
 
            sum1 = 0, sum2 = 0;
        }
    }
    while (i < m)
        sum1 += ar1[i++];
    while (j < n)
        sum2 += ar2[j++];
    result += max(sum1, sum2);
 
    return result;
}
int main(){
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		cout<<maxPathSum(a,b,n,m)<<endl;
	}
	return 0;
}
