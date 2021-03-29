#include<bits/stdc++.h>
using namespace std;
int t;
void findLargest(int m, int s) 
{ 
    cout<<" "; 
    int res[m]; 
    for (int i=0; i<m; i++) 
    { 
        if (s >= 9) 
        { 
            res[i] = 9; 
            s -= 9; 
        } 
        else
        { 
            res[i] = s; 
            s = 0; 
        } 
    } 
    for (int i=0; i<m; i++) 
        cout << res[i]; 
}
void findSmall(int m, int s) 
{
    int res[m];
    s -= 1;  
    for (int i=m-1; i>0; i--) 
    { 
        if (s > 9) 
        { 
            res[i] = 9; 
            s -= 9; 
        } 
        else
        { 
            res[i] = s; 
            s = 0; 
        } 
    } 
    res[0] = s + 1; 
    for (int i=0; i<m; i++) 
        cout << res[i]; 
}
void nn(int a,int b){
	int s[a]={0};
	int length=a;
    while(a>0&&b>0){
    	if(b<=9){
    		s[0]=1;
    		if(a-1!=0)s[a-1]=b-1;
    		else s[a-1]=b;
			break;
		}
        int x=b!=1?(b>9?b/9:b/(b-1)):1;
        int y=b%(b>9?9:b-1);
        for(int i=a-x;i<a;i++) {
            b>9?s[i]=9:s[i]=b-1;
        }
        if(y==0&&x<length){
        	s[0]=1;
        	s[a-x]=8;
		}
        a=a-x;
        if(a==0&&s[0]!=9) s[0]+=1;
        b=y;
    }
    for(int i=0;i<length;i++)cout<<s[i];
}
void ln(int a,int b){
	cout<<" ";
	int s[a]={0};
	int length=a;
	while(a>0&&b>0){
		if(b<10){
			s[length-a]=b;
			break;
		}
		int x=b/9;
		for(int i=0;i<x;i++) s[i]=9;
		b%=9;
		a-=x;
	}
	for(int i=0;i<length;i++)cout<<s[i];
}
// chú ý là test case b=0, a=1 vs a!=1
int main(){
    	int a,b;
	    cin>>a>>b;
	    if (b == 0) { 
	        (a == 1)? cout << 0 : cout << "-1 -1"; 
	        return 0; 
   		}  
	    if (b > 9*a) 
	    { 
	        cout << "-1 -1"; 
	        return 0; 
	    }
		nn(a,b);
		ln(a,b);
	    cout<<endl;
    return 0;
}
