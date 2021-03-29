#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;int count=n;
        long long a[n];
		while (n--)
        {
            long long tmp;cin>>tmp;
            if(tmp!=0) {
                cout<<tmp<<" ";
                count--;
            }
        }
        if(count>0)for(int i=0;i<count;i++) cout<<"0 ";
		cout<<endl;
	}
	return 0;
}
