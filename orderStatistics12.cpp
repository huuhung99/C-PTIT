#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;   
        int a[n];     
        int count=0,tmp;
        for(int i=0;i<n;i++) {
            cin>>tmp;
            // loc cac so duong vao mang a[]
            if(tmp>0) a[count++]=tmp;
        }
        // sap xep mang a[]
        sort(a,a+count);
        int b[count],count1=0;
        // xu ly trung lap
        b[count1++]=a[0];
        for(int i=1;i<count;i++){
            if(a[i]!=a[i-1]) b[count1++]=a[i];
        }
        // th1 mang ko co so nao duong 5 -1 -2 -3 -4 -5
        // th2 mang co count so duong  vd 5 1 2 3 4 5 5 2 3 4 5 6 5 2 5 6 7 8 5 3163 31368 3131 1 321 5 3163 31368 3131 121 323 6 1 1 1 1 1 2 6 1 2 2 2 2 2 6 1 1 1 1 1 3
        // truong hop mang a[] so co duong duong hoac so khac 1 la so begin a[]
        if(b[0]!=1||count1==0){
            cout<<1<<endl;
            continue;
        }
        // truong hop so 1 begin a[]
        for(int i=1;i<count1;i++){
            if(b[i]!=i+1){
                count1=0;
                cout<<i+1<<endl;
                break;
            }
        }
        if(count1!=0) cout<<count1+1<<endl;
	}
	return 0;
}
