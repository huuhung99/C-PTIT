#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
            long long tmp=n,i=2;
            int dem=0;
            while(i*i<=tmp){
                if(n%i==0){
                    n/=i;
                    dem++;
                }
                else {
                	if(dem!=0){
                		cout<<i<<" "<<dem<<" ";
                		dem=0;
                		i++;
					}
					else i++;
                }
            }
            if(n>2) cout<<n<<" "<<1;
        cout<<endl;
    }
    
    return 0;
}
