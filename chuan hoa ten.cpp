#include<stdio.h>
#include<string.h>
char a[105];
int main(){
	fgets(a,105,stdin);
	for(int i=0;i<strlen(a);i++) {
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		if(a[i]=='\n')a[i]=32;
	}
	char *p=strtok(a," ");
	int count=0;
	while(p!=NULL){
		char *p1=p;
		p[0]-=32;
		p=strtok(NULL," ");
		if(p==NULL) {
			for(int i=0;i<strlen(p1);i++) {
				if(p1[i]>='a'&&p1[i]<='z') p1[i]-=32;
			}
			printf(", %s",p1);
		}
		else {
			if(count==0){
				printf("%s",p1);
				count++;
			}
			else printf(" %s",p1);
		}
	}
	printf("\n");
	return 0;
}
