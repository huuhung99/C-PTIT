#include<bits/stdc++.h>
using namespace std;
long long f[93];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	fibo();
	int n;cin>>n;
	for(int j=0;j<n;j++){
		long long a;cin>>a;
		for(int i=0;i<93;i++){
			if(f[i]==a){
				cout<<"YES"<<endl;
				break;
			}
			else if(f[i]>a){
				cout<<"NO"<<endl;
				break;
			}
		}
	}
}
