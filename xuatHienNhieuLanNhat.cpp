#include<bits/stdc++.h>
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
		int max=0,number=0;
		for(auto i:m){
			if(i.second>max){
				number=i.first;
				max=i.second;
			}
		}
		if(max>n/2)cout<<number<<endl;
		else cout<<"NO\n";
	}
	return 0;
}
