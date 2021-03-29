#include <stdio.h>
#include <stdlib.h>
int A2[1000005];
int k;
 
int search(int key)
{
    int i = 0, idx = 0;
    for (i = 0; i < k; i++)
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
void sortA1ByA2(int A1[], int size1)
{
    qsort(A1, size1, sizeof(int), compareByA2);
}
int main(){
	int t; scanf("%d",&t);
	while(t>0){
		int n;scanf("%d%d",&n,&k);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<k;i++) scanf("%d",&A2[i]);
		sortA1ByA2(a, n);
		for (int i = 0; i < n; i++)
        	printf("%d ", a[i]);
        printf("\n");
		t--;
	}
    return 0;
}
