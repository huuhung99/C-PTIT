#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[4*n][4*n];
		int doDai=4*n,tong=doDai*doDai+1;
		for(int i=0;i<doDai;i++){
			for(int j=0;j<doDai;j++){
				a[i][j]=i*doDai+j+1;
//				cout<<a[i][j]<<" ";
			}
//			cout<<endl;
		}
		int *b=new int[2000],count=0;
		int tmp=doDai;
		for(int i=0;i<doDai;i++)
			b[count++]=a[i][0];
		while(tmp){
			for(int i=doDai-tmp+1;i<tmp-1;i++)
				b[count++]=a[tmp-1][i];
			for(int i=tmp-2;i>doDai-tmp+1;i--)
				b[count++]=a[i][tmp-2];
			for(int i=tmp-2;i>doDai-tmp+1;i--)
				b[count++]=a[doDai-tmp+1][i];
			tmp--;
			if(tmp)
			for(int i=doDai-tmp+1;i<doDai-tmp;i++)
				b[count++]=a[i][doDai-tmp+1];
		}
		for(int i=0;i<count;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<count;i++){
			cout<<tong-b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
