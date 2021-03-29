#include<iostream>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		long long x,y,p;
		cin>>x>>y>>p;
		long long result=1;
		if(y%2!=0) result*=x;
		y/=2;
		x=x*x%p;
		for(int i=0;i<y;i++){
			result=((result*x)%p)%p;
		}
		cout<<result<<endl;
	}
	return 0;
}
