//#include<bits/stdc++.h>
//using namespace std;
//int t,n,k;
//int a[25][25],b[25][25];
//int dem=0;
//void Try(int i,int j,int sum){
//	if(sum==k){
//		dem++;
//	}
//	else if(sum>k) {
//		sum-=a[i][j];
//		return ;
//	}
//	b[i][j]=1;
//	sum+=a[i][j];
//	if(i+1<n&&i+1==0) Try(i+1,j,sum);
//	if(j+1<n&&j+1==0) Try(i,j+1,sum);
//}
//int main(){
//	int t;cin>>t;
//	while(t--){
//		cin>>n>>k;
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++){
//				cin>>a[i][j];
//				b[i][j]=0;
//			}
//		}
//		Try(0,0,0);
//		cout<<dem<<endl;
//	    dem=0;
//	}
//	
//}
#include <stdio.h>\n\nint main(void) {\n  char name[10];\n  scanf(\"%s\", name);\n  printf(\"hello, %s\n\", name);\n  return 0;\n}
