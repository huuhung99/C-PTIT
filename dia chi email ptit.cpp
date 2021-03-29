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
	char tmp[105];
	int count=0;
	while(p!=NULL){
		tmp[count++]=p[0];
		char *p1=p;
		p=strtok(NULL," ");
		if(p==NULL) printf("%s",p1);
	}
	for(int i=0;i<count-1;i++) printf("%c",tmp[i]);
	printf("@ptit.edu.vn\n");
	return 0;
}
