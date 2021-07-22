#include<stdio.h>
int t;
int gcdMin(int n){
	for(int i=3;i<=n;i+=2){
		if(n%i==0) return i;
	}
}
bool isprime(int n){
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}
int main(){
	scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		if(n%2==0)
			for(int i=2;i<=n;i+=2){
				if(isprime(i-1)){
					printf("%d 2 ",i-1);
					continue;
				}
				printf("%d 2 ",gcdMin(i-1));
			}
		else{
			for(int i=1;i<n;i+=2){
				if(isprime(i)){
					printf("%d 2 ",i);
					continue;
				}
				printf("%d 2 ",gcdMin(i));
			}
			if(isprime(n)){
					printf("%d ",n);
			}
			else printf("%d ",gcdMin(n));
		}
		printf("\n");
	}
}
