#include <bits/stdc++.h>
using namespace std;
char s1[10005],s2[1005];
int main(){
    fgets(s1,10005,stdin);
    fgets(s2,10005,stdin);
    char * p=strtok(s1," ");
    while(p!=NULL){
    	if(strncmp(p,s2,strlen(p))!=0) cout<<p<<" ";
    	p=strtok(NULL," ");
	}
   	cout<<endl;    
    return 0;
}
