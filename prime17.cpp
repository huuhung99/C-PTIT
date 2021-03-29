#include<bits/stdc++.h>
using namespace std;
int t;
bool check[1000001];
int main(){
	cin>>t;
	while(t--){
		long long l,r;cin>>l>>r;
		for (int i = 2; i <= 1000000; i++) {
    		check[i] = true;
  		}
	  	int dem=0;
	  	int dau=sqrt(l),cuoi=sqrt(r);
	  	for (int i = dau; i <= cuoi; i++) {
		    if (check[i] == true) {
		    	for (int j = 2 * i; j <= cuoi; j += i)
		        	check[j] = false;
		        dem++;
		    }
	  	}
	  	cout<<dem;
		cout<<endl;
	}
	return 0;
}
