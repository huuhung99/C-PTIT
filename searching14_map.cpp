#include<stdio.h>
#include<map>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		std::map<int,int> mp;
		bool check=false;
		for(int i=0;i<n;i++){
			int tmp;scanf("%d",&tmp);
			if(check==false&&mp[tmp]>0){
				printf("%d\n",tmp);
				check=true;
			}
			mp[tmp]++;
		}
		if(check==false) printf("-1\n");
	}
	return 0;
}
