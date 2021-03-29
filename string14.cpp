#include<bits/stdc++.h>
using namespace std;
int t;
int countWords(char *str)  
{  
    int state = 0;  
    int wc = 0;
    while (*str)  
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')  
            state = 0;
        else if (state == 0)  
        {  
            state = 1;  
            ++wc;  
        }   
        ++str;  
    }  
  
    return wc;  
} 
int main(){
    cin>>t;
    while (t--)
    {    
        getchar();
        char a[10005];fgets(a,sizeof(a),stdin);
        cout<<countWords(a)<<endl;
        // int dem=0;
        // a.erase(std::remove_if(a.begin(), 
        //                       a.end(),
        //                       [](unsigned char x){return isspace(x)&&x!=32;}),
        //        a.end());
        // int n=a.length();
        // char tmp[n+1];
        // strcpy(tmp,a.c_str());
        // // printf("%s\n",tmp);
        // char * token;
        // char * rest=tmp;
        // while((token=strtok_r(rest," ",&rest))){
        //     dem++;
        // };
        // cout<<dem<<endl;
    }    
    return 0;
}