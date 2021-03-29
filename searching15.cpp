#include<bits/stdc++.h>
using namespace std;
int t;
int findCrossOver(int arr[], int low, int high, int x){
  if (arr[high] <= x)
    return high;
  if (arr[low] > x)  
    return low;
  int mid = (low + high)/2;  
  if (arr[mid] <= x && arr[mid+1] > x)
    return mid;
  if(arr[mid] < x)
      return findCrossOver(arr, mid+1, high, x);
  
  return findCrossOver(arr, low, mid - 1, x);
}
void printKclosest(int arr[], int x, int k, int n){
    int l = findCrossOver(arr, 0, n-1, x);
    int r = l+1;   
    int count = 0;
    if (arr[l] == x) l--;
    while (l >= 0 && r < n && count < k){
        if (x - arr[l] < arr[r] - x)
            printf("%d ", arr[l--]);
        else
            printf("%d ", arr[r++]);
        count++;
    }
    while (count < k && l >= 0)
        printf("%d ", arr[l--]), count++;
    while (count < k && r < n)
        printf("%d ", arr[r++]), count++;
    cout<<endl;
}
int main(){
	scanf("%d",&t);
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int k,x;cin>>k>>x;
		printKclosest(a, x, k, n);
//		k/=2;
//		int b[n],count=0,lui=x,tien=x;
//		while(k--){
//			if(*lower_bound(a,a+n,lui)=lui){
//				b[count]=*lower_bound(a,a+n,lui-1);
//			}
//			lui=b[count++];
//			b[count]=*upper_bound(a,a+n,tien);
//			tien=b[count++];
//		}
//		sort(b,b+count);
//		for(int i=0;i<count;i++) cout<<b[i]<<" ";
//		cout<<endl;
	}
	return 0;
}
