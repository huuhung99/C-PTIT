#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
bool check(char a,char b){
	if(a>=b) return true ;
	return false;
}
string prevNum(string str){ 
    int len = str.length(); 
    int index = -1; 
    for (int i = len - 2; i >= 0; i--) { 
        if (str[i] > str[i+1]) 
        { 
            index = i; 
            break; 
        } 
    } 
    int smallGreatDgt = -1; 
    for (int i = len - 1; i > index; i--) { 
        if (str[i] < str[index]) { 
            if (smallGreatDgt == -1) 
                smallGreatDgt = i; 
            else if (str[i] >= str[smallGreatDgt]) 
                smallGreatDgt = i; 
        } 
    } 
    if (index == -1) 
        return "-1"; 
    if (smallGreatDgt != -1)  
    { 
        swap(str[index], str[smallGreatDgt]); 
        return str; 
    } 
    return "-1"; 
} 
string maxSmallN(string a){
	int length=a.length();
	if(length<2||is_sorted(a.begin(),a.end())) return "-1";
	int index=-1;
	for(int i=length-2;i>=0;i--){
		if(a[i]>a[i+1]) {
			index=i;
			break;
		}
	}
	int indexSmall=-1;
	for(int i=length-1;i>index;i--){
		if(a[i]<a[index]){
			if(indexSmall==-1){
				indexSmall=i;
			}
			else if(a[i]>=a[indexSmall]){
				indexSmall=i;
			}
		}
	}
	if(indexSmall!=-1){
		swap(a[index],a[indexSmall]);
		return a;
	}
	return "-1";
}
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
		cout<<maxSmallN(a)<<endl;
	}
	return 0;
}
