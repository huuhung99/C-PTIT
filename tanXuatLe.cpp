#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			m[tmp]++;
		}
		for(auto i:m){
			if(i.second%2==1){
				cout<<i.first<<endl;
				break;
			}
		}
	}
	return 0;
}
