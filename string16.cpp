#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
void subcnt(int n,int r,int g,int b)
{
	ll fact[n+1];
	fact[0]=1;
	for(int i=1;i<=n;i++)
	{
		fact[i]=fact[i-1]*i;
	}
	ll sum=0;
	int left=n-(r+g+b);
	for(int i=0;i<=left;i++)
	{
		for(int j=0;j<=left-i;j++)
		{
			int k=left-i-j;
			sum+=fact[n]/(fact[i+r]*fact[j+b]*fact[k+g]);
		}
	}
	cout<<sum<<endl;
}
int main()
{
	int t;
	cin>>t;
	int n,r,b,g;
	while(t--)
	{
		cin>>n>>r>>g>>b;
		subcnt(n,r,g,b);
	}
	return 0;
}
		

