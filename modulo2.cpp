#include<iostream>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		bool check=false;
		long long a,m;
		cin>>a>>m;
		for(int i=0;i<m;i++){
			if((a*i)%m==1){
				cout<<i<<endl;
				check=true;
				break;
			}
		}
		if(check==false) cout<<-1<<endl;
	}
	return 0;
}
