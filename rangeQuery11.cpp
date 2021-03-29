#include<bits/stdc++.h>
using namespace std;
int t;
// typedef struct{
//     int chenhLech;
//     int index;
// } tmp;
// bool check(tmp a,tmp b){
//     if(a.chenhLech>b.chenhLech) return true;
//     return false;
// }
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;   
        int a[n];     
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        // tmp b[n-1];
        int min=INT_MAX;
        for(int i=1;i<n;i++){
            if(min>a[i]-a[i-1]) min=a[i]-a[i-1];
            // b[i-1].chenhLech=a[i]-a[i-i];
            // b[i-1].index=i;
        }
        cout<<min<<endl;
        // sort(b,b+n-1,check);

	}
	return 0;
}
