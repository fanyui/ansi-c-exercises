//program to expan shorthand notation in s1 to full in s2
#include<stdio.h>
#include<stdlib.h> 
void expand(int *,int *);
int main(){
	int s1[]={'a','-','z'};
	int s2[26];
	expand(s1,s2);
	return 0;

}
void expand(int *s1,int *s2){
	int len;g
	int i;
	 len=s1[3]-s1[1];
	 for(i=0;i<=len;i++){
	 	s2[i]=s1[1]+i;
	 	printf("%c ",s2[i]);
	}
}