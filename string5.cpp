#include<bits/stdc++.h>
using namespace std;
int t;
typedef struct{
	char value;
	int count;
} str;
bool check(str a,str b){
	if(a.count<b.count) return true;
	return false;
}
int isPossible(string str) 
{ 
    unordered_map<char, int> freq; 
    int max_freq = 0; 
    for (int j = 0; j < (str.length()); j++) { 
        freq[str[j]]++; 
        if (freq[str[j]] > max_freq) 
            max_freq = freq[str[j]]; 
    } 
    if (max_freq <= (str.length() - max_freq + 1)) 
        return 1; 
    return 0; 
} 
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
//		int lena=a.length();
//		map<char,int> mp;
//		int max=0;
//		for(int i=0;i<lena;i++){
//			mp[a[i]]++;
//			if(mp[a[i]]>max)
//				max=mp[a[i]];
//		}			
//		if(mp.size()==1){
//			cout<<0<<endl;
//			continue;
//		}
//		if(max<=lena-max+1){
//			cout<<1<<endl;
//			continue;
//		}
//		cout<<0<<endl;
		cout<<isPossible(a)<<endl;
	}
	return 0;
}
