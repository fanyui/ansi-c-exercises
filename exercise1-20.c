#include<stdio.h>
#define N 10
int main(){
	int ch,i;

	while ((ch=getchar())!=EOF)
		if (ch=='\t')
			for(i=0;i<N;i++)
			putchar(' ');
		else 
			putchar(ch);

}
