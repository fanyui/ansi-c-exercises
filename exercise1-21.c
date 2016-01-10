#include<stdio.h>
#define N 4
int main(){
int i,ch,cnt;
	while((ch=getchar())!=EOF)
		if(ch==' ')
			cnt++;
		if(cnt==N)
			putchar('\t');
		else
		{
			for(i=0;i<=cnt;i++)
			putchar(' ');
		}
		putchar(ch);
		cnt=0;

}