#include <bits/stdc++.h>
using namespace std;
 
// A Binary Search based function to find index of FIRST occurrence
// of x in arr[].  If x is not present, then it returns -1
 
// The same can be done using the lower_bound
// function in C++ STL
int first(int arr[], int low, int high, int x, int n)
{
 
    // Checking condition
    if (high >= low) {
 
        // FInd the mid element
        int mid = low + (high - low) / 2;
 
        // Check if the element is the extreme left
        // in the left half of the array
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
 
        // If the element lies on the right half
        if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
 
        // Check for element in the left half
        return first(arr, low, (mid - 1), x, n);
    }
 
    // ELement not found
    return -1;
}
 
// Sort A1[0..m-1] according to the order defined by A2[0..n-1].
void sortAccording(int A1[], int A2[], int m, int n)
{
    // The temp array is used to store a copy of A1[] and visited[]
    // is used mark the visited elements in temp[].
    int temp[m], visited[m];
    for (int i = 0; i < m; i++) {
        temp[i] = A1[i];
        visited[i] = 0;
    }
 
    // Sort elements in temp
    sort(temp, temp + m);
 
    // for index of output which is sorted A1[]
    int ind = 0;
 
    // Consider all elements of A2[], find them in temp[]
    // and copy to A1[] in order.
    for (int i = 0; i < n; i++) {
        // Find index of the first occurrence of A2[i] in temp
        int f = first(temp, 0, m - 1, A2[i], m);
 
        // If not present, no need to proceed
        if (f == -1)
            continue;
 
        // Copy all occurrences of A2[i] to A1[]
        for (int j = f; (j < m && temp[j] == A2[i]); j++) {
            A1[ind++] = temp[j];
            visited[j] = 1;
        }
    }
 
    // Now copy all items of temp[]
    // which are not present in A2[]
    for (int i = 0; i < m; i++)
        if (visited[i] == 0)
            A1[ind++] = temp[i];
}
 
// Utility function to print an array
void printArray(int arr[], int n)
{
 
    // Iterate in the array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver Code
int main()
{
    int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a1[n],a2[m];
		for(int i=0;i<n;i++) cin>>a1[i];
		for(int i=0;i<m;i++) cin>>a2[i];
		sortAccording(a1, a2, n, m);
    	printArray(a1, n);
	}
    return 0;
}
