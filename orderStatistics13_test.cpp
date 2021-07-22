#include<bits/stdc++.h>
using namespace std;
int t;
long long sumArray(int arr[],int dau,int cuoi){
	long long sum=0;
	for(int i=dau;i<=cuoi;i++) sum+=arr[i];
	return sum;
}
void display(int arr[],int dau,int cuoi){
	for(int i=dau;i<=cuoi;i++) cout<<arr[i]<<" ";
}
long long max_path_sum(int a[], int b[], int m, int n){
    int i = 0,j = 0,pre_i=0,pre_j=0;
    long long result = 0;
    while (i < m && j < n){
        if (a[i] == b[j]) {
			if ((i - pre_i) > (j - pre_j)) {
				//display(a, pre_i, i);
				result+=sumArray(a, pre_i, i);
			} 
			else {
				//display(b, pre_j, j);
				result+=sumArray(b, pre_j, j);
			}
			i++;
			j++;
			pre_i = i;
			pre_j = j;
        } 
	    else if (a[i] > b[j]) {
    		j++;
		} 
		else {
			i++;
		}
    }
    if ((m - pre_i) > (n - pre_j)) {
		result+=sumArray(a, pre_i, m-1);
		//display(a, pre_i, m-1);
	} 
	else {
		result+=sumArray(b, pre_j, n-1);
		//display(b, pre_j, n-1);
	}
	return result;
}
int maxPathSum(int ar1[], int ar2[],int m,int n){
    int i,j,sum,isum,jsum;
    i=j=sum=isum=jsum=0;
    while(i<m && j<n){
        if(ar1[i]==ar2[j]){
        	sum+=max(isum,jsum)+ar1[i];
            isum=jsum=0;
            ++i;++j;
        }
        else if(ar1[i]<ar2[j]){
           isum+=ar1[i++];
        }
        else
        	jsum+=ar2[j++];
        }
        while(i<m){
         isum+=ar1[i++];
       }
       while(j<n){
         jsum+=ar2[j++];
       }
       return sum+max(isum,jsum);
}

int main(){
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
//		max_path_sum(a,b,n,m);
		cout<<maxPathSum(a,b,n,m)<<endl;
	}
	return 0;
}
