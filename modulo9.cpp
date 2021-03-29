//#include<bits/stdc++.h>
//using namespace std;
//int t,n,k;
//const int m=1e9+7;
//long long nCr(int n, int k){
//	long long res=1;
//    if (k > n - k) 
//    k = n - k; 
//    for (int i = 0; i < k; ++i) { 
//        res *= (n - i); 
//        res /= (i + 1); 
//    } 
//    return res;
//}
//int nCrModpDP(int n,int r ,int p){
//	int C[n+1];
//	memset(C,0,sizeof(C));
//	C[0]=1;
//	for(int i=1;i<=n;i++)	{
//		for(int j=min(i,r);j>0;j--)
//		C[j]=(C[j]+C[j-1])%p;
//	}
//	return C[r];
//}
//int nCrModpLucas(int n,int r){
//	if(r==0)
//	return 1;
//	int ni=n%m,ri=r%m;
//	return (nCrModpLucas(n/m,r/m)) * nCrModpDP(ni,ri,m)%m;
//	
//}
//int main(){
//    cin>>t;
//    while(t--){
//        cin>>n>>k;
//        cout<<nCrModpLucas(n,k);
//        cout<<endl;
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int t,n,r;
const int m=1e9+7;
void tach(map<int,int> &mang,int n){
	if(n==2||n==3){
		mang[n]++;
		return;
	}
	int i=2;
	while(i*i<=n){
		if(n%i==0){
			mang[i]++;
			n/=i;
		}
		else i++;
	}
	if(n>1) mang[n]++;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&r);
		int tmp= r>(n-r)?r:n-r;
		map<int,int> mangTo,mangNho;
		for(int i=tmp+1;i<n+1;i++){
			tach(mangTo,i);
		}
		for(int i=2;i<n-tmp+1;i++){
			tach(mangNho,i);
		}
		int sum=1;
		for(auto i:mangTo){
			i.second= i.second-mangNho[i.first];
			for(int j=0;j<i.second;j++){
				sum=(sum*i.first) %m;
			}
		}
		cout<<sum<<endl;
    }
    return 0;
}
