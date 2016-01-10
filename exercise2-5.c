#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int any(char * ,char * );
int main(){
	char array[]="harisu fanyui kongnyuy\n";
	char array2[]="elm";
	printf("%d\n",any(array,array2));

}

//returns the first occurrance of a string in s2 in s1
int any(char s1[], char s2[])
{
	bool seen;
	int small=1000;
int i, j;
int k,pos=0;
	for(k=0;s2[k]!='\0';k++){
			pos=0;
		for (i = j = 0; s1[i] != '\0'; i++){
			if (s1[i] != s2[k]){
				s1[j++] = s1[i];
					pos++;
					seen=0;
			}
			else{

				s1[j] = '\0';
				seen=1;
				break;
			}

		}
		if(seen){
			if (small>pos)
				small=pos;
		}
		else small=-1;
	}
	return small;
}