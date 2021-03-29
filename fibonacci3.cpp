#include<iostream>
using namespace std;
int t;
long long fibo[1000];
void fibonacci(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=16;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	cin>>t;
	fibonacci();
	while(t--){		
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=16;j++){
				if(a[i]==fibo[j]){
					cout<<a[i]<<" ";
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
