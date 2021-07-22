#include <stdio.h>
#include <stdlib.h>
int A2[1000005];
int size;
 
int search(int key)
{
    int i = 0, idx = 0;
    for (i = 0; i < size; i++)
        if (A2[i] == key)
            return i;
    return -1;
}
int compareByA2(const void* a, const void* b)
{
    int idx1 = search(*(int*)a);
    int idx2 = search(*(int*)b);
    if (idx1 != -1 && idx2 != -1)
        return idx1 - idx2;
    else if (idx1 != -1)
        return -1;
    else if (idx2 != -1)
        return 1;
    else
        return (*(int*)a - *(int*)b);
}
 
// This method mainly uses qsort to sort A1[] according to A2[]
void sortA1ByA2(int A1[], int size1)
{
    qsort(A1, size1, sizeof(int), compareByA2);
}
 
// Driver program to test above function
int main(int argc, char* argv[])
{
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d%d",&n,&size);
		int a1[n];
		for(int i=0;i<n;i++) scanf("%d",&a1[i]);
		for(int i=0;i<size;i++) scanf("%d",&A2[i]);
		sortA1ByA2(a1, n);
		int i;
	    for (i = 0; i < n; i++)
	        printf("%d ", a1[i]);
	    printf("\n");
	}
    return 0;
}
