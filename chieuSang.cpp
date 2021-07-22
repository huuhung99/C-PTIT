#include<bits/stdc++.h>
using namespace std;
int main(){
	int chieuDai,soBong,doPhu;
	cin>>chieuDai>>soBong>>doPhu;
	int vitri[soBong];
	int a[chieuDai+1];
	for(int i=0;i<chieuDai+1;i++)
		a[i]=0;
	for(int i=0;i<soBong;i++){
		cin>>vitri[i];
		int tmp=vitri[i]-1;
		while(tmp<vitri[i]+doPhu&&tmp<chieuDai){
			a[tmp++]=1;
		}
		tmp=vitri[i]-1;
		while(tmp>vitri[i]-doPhu&&tmp>=0){
			a[tmp--]=1;
		}
	}
	int count=0,dau=0,cuoi=0;
	for(int i=0;i<chieuDai+1;i++){
		cout<<a[i]<<" ";
		if(i==chieuDai-1) cout<<endl;
	}
	for(int i=0;i<chieuDai+1;i++){
		if(a[i]==0){
			dau=i;
			cuoi=i;
			while(a[++i]==0){
				cuoi=i;
			}
			count+=(cuoi-dau)%(doPhu*2+1);
		}
	}
	cout<<count;
	return 0;
}
