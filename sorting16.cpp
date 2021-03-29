#include<bits/stdc++.h>
using namespace std;
int t;
typedef struct{
	int value;
	int count;
}str;
bool check(str a,str b){
	if(a.count>b.count) return true;
	if(a.count==b.count){
		return a.value<b.value? true:false;
	}
	return false;
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			mp[tmp]++;
		}
		str a[mp.size()];
		int dem=0;
		for(auto m:mp){
			a[dem].value=m.first;
			a[dem++].count=m.second;
		}
		sort(a,a+dem,check);
		for(int i=0;i<dem;i++){
			for(int j=0;j<a[i].count;j++){
				cout<<a[i].value<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
