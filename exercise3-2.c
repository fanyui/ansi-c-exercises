#include<stdio.h>
#include<stdlib.h>
void escape(char *,char*);
int main(){
char s[15]="harisu\t fanyuo";
char t[20];
//scanf("%s",s);
	escape(s,t);
	printf("%s\t%s",s,t);
	return 0;
}
void escape(char *s,char *t){
	int i,j;
	i=j=0;
	while(s[i]!='\0'){
	if(s[i]=='\t'){
		t[j++]='\\';
		t[j]='t';
	}
	else
	t[j]=s[i];
	i++;
	j++;
}
}