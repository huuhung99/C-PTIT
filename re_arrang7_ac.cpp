#include<bits/stdc++.h>
using namespace std;
int dayconmin(int arr[],int n,int x)
{
	int curr_sum=0,min_len=n+1;
	int start=0,end=0;
	while(end<n)
	{
		while(curr_sum<=x&&end<n)
		{
			curr_sum+=arr[end++];
			while(curr_sum>x&&start<n)
			{
				if(end-start<min_len)
				min_len=end-start;
				curr_sum-=arr[start++];
			}
		}
	}
	if(min_len>n) return -1; 
	return min_len;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<dayconmin(a,n,k)<<endl;
	}
}

