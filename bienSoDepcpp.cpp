#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int checkTang(char a[],int len){
	cout<<"tang"<<endl;
	for(int i=5;i<len-1;i++){
		if(a[i]=='.') continue;
		else if(a[i]>=a[i+1]&&a[i+1]=='.') continue;
		else if(a[i]>=a[i+1]) return 0;
	}
	return 1;
}
int checkBang(char a[],int len){
	cout<<"bang"<<endl;
	int check=1;
	for(int i=5;i<len-1;i++){
		if(a[i]=='.'){
			i++;
			continue;
		}
		else if(a[i]!=a[i+1]&&a[i+1]=='.') continue;
		else if(a[i]!=a[i+1]) check=0;
	}
	return check;
}
int check3so(char a[],int len){
	cout<<"3so"<<endl;
	for(int j=5;j<7;j++){
		if(a[j]!=a[j+1]) return 0;
	}
	if(a[9]!=a[10]) return 0;
	return 1;
}
int checkDep(char a[],int len){
	cout<<"dep"<<endl;
	for(int i=5;i<len;i++){
		if(a[i]=='.') continue;
		else if(a[i]=='6'||a[i]=='8') continue;
		else return 0;
	}
	return 1;
}
int main(){
	int n;cin>>n;
	cin.ignore();
	for(int k=0;k<n;k++){
		char a[50];
		fgets(a,50,stdin);
//		getchar();
		int len=strlen(a)-1;
		if(check3so(a,len)||checkBang(a,len)||checkTang(a,len)||checkDep(a,len)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
