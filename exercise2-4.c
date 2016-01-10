#include<stdio.h>
#include<stdlib.h>
void squeeze(char * ,char * );
int main(){
	char array[]="harisu fanyui kongnyuy\n";
	char array2[]="iu";
	squeeze(array,array2);

}

/* squeeze: delete all c from s */
void squeeze(char s1[], char s2[])
/* squeeze: delete all c from s */
{
int i, j;
int k;
for(k=0;s2[k]!='\0';k++)
for (i = j = 0; s1[i] != '\0'; i++)
if (s1[i] != s2[k])
s1[j++] = s1[i];
s1[j] = '\0';

printf("%s",s1);
}