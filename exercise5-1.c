//demonstrating the function getint which extract only the integer from a string
//author harisu

#include<stdio.h>
#include<stdlib.h>
int getint(int *pn);
int getch(void);
void ungetch(int c);
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int main(){
int temp;
int *pointer;
pointer=&temp;
int result;
result=getint(pointer);
printf("value return from the function getint is :%d\n",result);
printf("truncated integer is:%d\n",temp);
	return 0;
}



int getint(int *pn){
	int c,sign;
	while(isspace(c=getch()))
		;
	if(!isdigit(c)&& c!=EOF && c!='+' && c!='-'){
		ungetch(c);
		return 0;
	}
	sign=(c=='-')?-1:1;
	if(c=='+' || c=='-'){
		c=getch();
	}
	if(isdigit(c)){
	for(*pn=0;isdigit(c);c=getch())
		*pn=10 * *pn+(c-'0');
	
	*pn *=sign;
	if(c!=EOF)
		ungetch(c);
	return c;
	}
	else ungetch(c);
	exit(1);
}


/* buffer for ungetch */
/* next free position in buf */
int getch(void) /* get a (possibly pushed-back) character */
{
return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
/* push character back on input */
{
if (bufp >= BUFSIZE)
printf("ungetch: too many characters\n");
else
buf[bufp++] = c;
}
