#include<bits/stdc++.h>
using namespace std;
int t;
int m=1e9+7;
long long tmp(long long hx,long long gx){
	if(gx==1) return hx;
	if(gx%2==0) return tmp((hx*hx)%m,gx/2)%m;
	return (hx*(tmp((hx*hx)%m,gx/2)%m))%m;
}
int main(){
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int a[n],gx;
		cin>>a[0];
		gx=a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			gx=__gcd(a[i],gx);
		}
//		cout<<"gx="<<gx<<endl;
		long long hx=1;
		for(int i=0;i<n;i++){
			hx=(hx*a[i])%m;
		}
//		int result=1;
//		for(int i=0;i<gx;i++){
//			result =((result%m)*(hx%m))%m;
//		}
//		cout<<result<<endl;
		cout<<tmp(hx%m,gx%m)<<endl;
	}
	return 0;
}

