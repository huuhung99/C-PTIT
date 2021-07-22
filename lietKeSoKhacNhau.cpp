#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++){
		int tmp;cin>>tmp;
		m[tmp]++;
	}
	for(auto i:m){
		cout<<i.first<<" ";
	}
}
