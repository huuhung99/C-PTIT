#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        if(pat.length()>s.length()){
            cout<<-1<<endl;
        }
        else{
            int shash[26]={0};
            int phash[26]={0};
            
            for(int i=0;i<pat.length();i++){
                phash[pat[i]-'a']++;
            }
            int counter=0;
            int begin=0;
            int startindex=-1;
            int length=0;
            int minlength=INT_MAX;
            for(int i=0;i<s.length();i++){
                shash[s[i]-'a']++;
                if(phash[s[i]]-'a'!=0&&shash[s[i]-'a']<=phash[s[i]-'a']){
                    counter++;
                }
                if(counter==pat.length()){
                    while(shash[s[begin]-'a']>phash[s[begin]-'a']||phash[s[begin]-'a']==0){
                        if(shash[s[begin]-'a']>phash[s[begin]-'a'])
                        shash[s[begin]-'a']--;
                        begin++;
                    }
                    length=i-begin+1;
                    if(length<minlength){
                        startindex=begin;
                        minlength=length;
                    }
                    
                }
            }
            if(startindex==-1)
            cout<<-1<<endl;
            else
            cout<<s.substr(startindex,minlength)<<endl;
        }
    }
	return 0;
}

