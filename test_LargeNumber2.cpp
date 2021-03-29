#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		if(a.length()<b.length()){
			swap(a,b);
		}
		int lengthA=a.length();
		int lengthB=b.length();
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		string result="";
		int nho=0;
		for(int i=0;i<lengthB;i++){
			int sum=a[i]+b[i]+nho-96;
			if(sum>9){
				result+=to_string(sum%10);
				nho=sum/10;
			}
			else{
				result+=to_string(sum);
				nho=0;
			}
		}
		for(int i=lengthB;i<lengthA;i++){
			int sum=a[i]+nho-48;
			if(sum>9){
				result+=to_string(sum%10);
				nho=sum/10;
			}
			else{
				result+=to_string(sum);
				nho=0;
			}
		}
		if(nho>0) result+="1";
		reverse(result.begin(),result.end());
		cout<<result<<endl;
	}
	return 0;
}
