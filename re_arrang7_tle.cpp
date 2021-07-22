#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		long long x,sum=0;cin>>x;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum+=a[i];
		}
		if(x>=sum){
			cout<<-1<<endl;
			continue;
		}
		else{
			int result=n,tmp1=n;
			for(int i=0;i<n;i++){
				long long tmp=0;
				for(int j=i;j<tmp1+i&&j<n;j++){
					tmp+=a[j];
					if(tmp>x){
						result=min(result,j-i+1);
						break;
					}
				}
				tmp1=result;
			}
			cout<<result<<endl;
		}
	}
	return 0;
}
