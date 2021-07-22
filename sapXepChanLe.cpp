#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int value;
	int index;
}tmp;
bool check(tmp a,tmp b){
	return a.value>b.value;
}
int main(){
	int n;cin>>n;
	int a[n];
	int chan[n],le[n],indexLe=0,indexChan=0;
	int indexle[n],indexchan[n];
	for(int i=0;i<n;i++){
		int tmp;cin>>tmp;
		if(tmp%2==0){
			chan[indexChan]=tmp;
			indexchan[indexChan++]=i;
		}
		else{
			le[indexLe]=tmp;
			indexle[indexLe++]=i;
		}
	}
	sort(le,le+indexLe);
	sort(chan,chan+indexChan);
	sort(indexchan,indexchan+indexChan);
	sort(indexle,indexle+indexLe);
	for(int i=0;i<indexChan;i++){
		a[indexchan[i]]=chan[i];
	}
	for(int i=0;i<indexLe;i++){
		a[indexle[i]]=le[indexLe-i-1];
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
