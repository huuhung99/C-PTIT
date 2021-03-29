#include<bits/stdc++.h>
int t;
int main(){
	scanf("%d",&t);
	while(t--){
		long long a,b;scanf("%lld%lld",&a,&b);
//		if(b%2==0){
//			printf("No\n");
//			continue;
//		}
		long long sum=a*(a+1)/2;
		long long num1=(sum+b)/2;
		long long num2=sum-num1;
		if(num1*2!=(sum+b)){
			printf("No\n");
			continue;
		}
		if(std::__gcd(num1,num2)==1){
			printf("Yes\n");
			continue;
		}
		printf("No\n");
	}
	return 0;
}
