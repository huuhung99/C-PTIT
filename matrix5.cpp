#include<bits/stdc++.h>
using namespace std;
int n,sum;
int a[101][101];
void input(){
    cin>>n;
    sum = 0;
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            cin>>a[i][j];
            sum += a[i][j];
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        int s = 0;
	    for (int i = 0;i<n;i++) {
	        int ss = 0;
	        for (int j = 0;j<n;j++) {ss += a[i][j];}
	        s = max(s, ss);
	    }
	    for (int i = 0;i<n;i++) {
	        int ss = 0;
	        for (int j = 0;j<n;j++) {
	            ss += a[j][i];
	        }
	        s = max(s, ss);
	    }
	    cout << s*n-sum << endl;
    }
    return 0;
}

