#include<bits/stdc++.h>
using namespace std;
int t;
int a[100000005];
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;
        memset(a,0,sizeof(a));
        bool check =false;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            if(a[tmp]==0) {
                a[tmp]=tmp;
            }
            else{
                if(check==false){
                    check=true;
                    cout<<tmp;
                }
            }
        }
        if(check==false)cout<<-1;
        cout<<endl;
	}
	return 0;
}
