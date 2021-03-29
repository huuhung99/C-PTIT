#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string a;int k;
		cin>>a>>k;
		int len=a.length(),count=0;
		int check[26];
		for(int i=0;i<len;i++){
			int dem=0;
			memset(check, 0, sizeof(check));
			for(int j=i;j<len;j++){
				if(check[a[j] - 'a']==0) dem++;
				check[a[j] - 'a']++;
				if (dem == k) count++; 
            	if(dem > k) break; 
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
