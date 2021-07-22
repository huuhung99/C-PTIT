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
		if(x>sum){
			cout<<-1<<endl;
			continue;
		}
		else if(x==sum){
			cout<<n<<endl;
			continue;
		}
		else{
			int result=n;
			for(int i=0;i<n-1;i++){
				long long tmp=0,tmp1=0;
				for(int j=i;j<n;j++){
					tmp+=a[j];
					if(tmp>x){
						result=min(result,j-i+1);
						tmp1=j;
						long long tmp2=tmp-x;
						for(int k=i;k<=tmp1;k++){
							if(a[k]<tmp2){
								result--;
								tmp2-=a[k];
							}
						}
						break;
					}
				}
				if(tmp>i)i=tmp1;
			}
			cout<<result<<endl;
		}
	}
	return 0;
}
