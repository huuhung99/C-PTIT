//#include<bits/stdc++.h>
//using namespace std;
//int t;
//int main(){
//    cin>>t;
//	while(t--){
//		int n,k,dem=0;cin>>n>>k;   
//        int a[n];     
//        for(int i=0;i<n;i++)cin>>a[i];
//        for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                if(a[i]+a[j]==k) dem++;
//            }
//        }
//        cout<<dem<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
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
		cin>>a[i];
		int ans=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]+a[j]==k)
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

