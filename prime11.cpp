#include<bits/stdc++.h>
using namespace std;
int t;
bool isprime(long long n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0) return false;
	return true;
}
long long powLong(long long a,long long n){
    long long result=a;
    for(int i=1;i<n;i++){
        result*=a;
    }
    return result;
}
int listOfPerfectNumber(long long a[]){
    int count=0;
    for(int i=0;i<32;i++){
        if(isprime(powLong(2,i)-1)&&isprime(i)){
            a[count++]=(powLong(2,i-1)*(powLong(2,i)-1));
        }
    }
    return count;
}
int check(long long n){
    switch (n)
    {
    case 6:return 1;
    case 28:return 1;
    case 496:return 1;
    case 8128:return 1;
    case 33550336:return 1;
    case 8589869056:return 1;
    case 137438691328:return 1;    
    default:return 0;
    }
    return 0;
}
int main(){
    cin>>t;
    while(t--){
        long long n;cin>>n;
        cout<<check(n)<<endl;
        // long long a[100];
        // bool check=false;
        // int lengthOfList=listOfPerfectNumber(a);
        // for(int i=0;i<lengthOfList;i++){
        //     cout<<a[i]<<" ";
        // }
    }
    return 0;
}
