#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
	while(t--){
		int n;cin>>n;   
        int a[n],b[n];     
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int max=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                int suma=0,sumb=0;
                for(int k=i;k<=j;k++){
                    suma+=a[k];
                    sumb+=b[k];
                }
                if(suma==sumb&&j-i>max) max=j-i;
            }
        }
        cout<<max+1<<endl;
	}
	return 0;
}
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t;cin>>t; 
    while(t--){ 
        int n;cin>>n; 
        int a[n],b[n]; 
        for(int i=0;i<n;i++) cin>>a[i]; 
        for(int i=0;i<n;i++) cin>>b[i]; 
        int max=1,k=0; 
        for(int i=0;i<n;i++){ 
            int x=0,y=0; 
            for(int j=i;j<n;j++){ 
                x+= a[j]; y+= b[j]; 
                if(x==y) k=j-i+1; 
            }
            if(k>max) max=k; 
        } 
        cout<<max; cout<<endl; 
    }
}