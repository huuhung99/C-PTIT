#include<bits/stdc++.h>
using namespace std;
void bai1(){
	//tim so lan xuat hien
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		map<int,int> a;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			a[tmp]++;
		}
		cout<<a[k]<<endl;
	}
}
void bai2(){
	// so dau tien bi lap
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		bool check=true;
		for(int i=0;i<n;i++){
			if(m[a[i]]>1){
				cout<<a[i]<<endl;
				check=false;
				break;
			}
		}
		if(check==true) cout<<"NO"<<endl;
	}
}
void bai3(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		sort(a,a+n);
		int min=a[0],max=a[n-1];
		int size=m.size();
		cout<<max-min-size+1<<endl;
	}
}
typedef struct{
	int so1;
	int so2;
}tmp;
bool check(tmp a,tmp b){
	return a.so1<b.so1;
}
void bai4(){
	//xep hang
	int t;cin>>t;
	tmp mang[t];
	for(int i=0;i<t;i++){
		cin>>mang[i].so1>>mang[i].so2;
	}
	sort(mang,mang+t,check);
	int result=mang[0].so1+mang[0].so2;
	for(int i=1;i<t;i++){
		if(result>mang[i].so1){
			result+=mang[i].so2;
		}
		else{
			result=mang[i].so1+mang[i].so2;
		}
	}
	cout<<result<<endl;
}
void bai5(){
	// chia het cho 11
	int t;cin>>t;
	while(t--){
		string n;cin>>n;
		int du=n[0]-'0';
		for(int i=1;i<n.length();i++){
			du=(du*10+n[i]-'0')%11;
		}
		if(du==0)cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
int main(){
//	bai1();
	bai2();
//	bai3();
//	bai4();
//	bai5();
	return 0;
}
