#include<bits/stdc++.h>
using namespace std;
int t;
string a,c;
string substring(string a,int begin,int end){
	string result="";
	for(int i=begin;i<end;i++) result+=a[i];
	return result;
}
string sub(string a,string b){
	int lena=a.length();
	int lenb=b.length();
	size_t begin=a.find_first_of(b[0]);
	if(begin==string::npos) return "-1";
	string result="";
	result+=a.at(begin);
	size_t index=begin;
	for(int i=1;i<lenb;i++){
		begin=a.find_first_of(b[i],index+1);
		if(begin==string::npos) return "-1";
		result+=substring(a,index+1,begin+1);
		index=begin;
		cout<<"result="<<result<<endl;
	}
	if(result.length()==lena) {
		if(c==b) return result;
		reverse(result.begin(),result.end());
		return result;
	}
	reverse(result.begin(),result.end());
	reverse(b.begin(),b.end());
	return sub(result,b);
}
int main(){
	cin>>t;
	while(t--){
		cin>>a>>c;
		cout<<sub(a,c)<<endl;
	}
	return 0;
}
