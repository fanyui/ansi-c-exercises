#include<stdio.h>
void reverse(char s[],int max);
#define MAXi 1000
int main(){
	char string[MAX];
reverse(string,MAX);
return 0;
}
void reverse(char s[],int max)
{
int c, i;
for (i=0; i < max-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	s[i] = c;
if (c == '\n') {
	s[i] = c;
	++i;
}
	s[i] = '\0';

	for(;i>=0;i--)
		putchar(s[i]);
}
