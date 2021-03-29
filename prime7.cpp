#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
//	srand(time(NULL));
	while(t--){
		int n;
//		n=rand()%1000;
//		cout<<n<<endl;
		cin>>n;
		int a[1005]={0},count=0;
		int i=2;
		while(i*i<=n){
			if(n%i==0){
				a[count++]=i;
				n/=i;
			}
			else i++;
		}
		if(n>1) a[count++]=n;
		if(count==3){
			int check=0;
			for(int i=1;i<count;i++){
				if(a[i]==a[i-1]){
					check=1;
					cout<<0<<endl;
					break;
				}
			}
			if(check==0) cout<<1<<endl;
		}	
		else cout<<0<<endl;
	}
}
