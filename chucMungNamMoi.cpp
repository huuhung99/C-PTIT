#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;scanf("%d ",&t);
	map<string,int> a;
	for(int i=0;i<t;i++){
		string tmp;
		getline(cin,tmp);
		a[tmp]++;
	}
//	for(auto i:a){
//		cout<<i.first<<" "<<i.second;
//	}
	cout<<a.size();
	return 0;
}
