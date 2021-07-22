#include<bits/stdc++.h>
using namespace std;
int t;
long long max_path_sum(int arr1[], int arr2[], int m, int n){
    int i = 0,j = 0;
    long long sum1 = 0,sum2 = 0,result = 0;
    while (i < m && j < n){
        if (arr1[i] < arr2[j])
            sum1 += arr1[i++];
        else if (arr1[i] > arr2[j])
            sum2 += arr2[j++];
        else {
            result += max(sum1, sum2);
            sum1 = 0;
            sum2 = 0;
            while (i < m &&  j < n && arr1[i] == arr2[j]){
                result = result + arr1[i];
                i++;
                j++;
            }
        }
    }
    while (i < m)
        sum1  +=  arr1[i++];
    while (j < n)
        sum2 +=  arr2[j++];
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
		cout<<max_path_sum(a,b,n,m)<<endl;
	}
	return 0;
}
