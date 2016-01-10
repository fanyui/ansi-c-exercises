#include<stdio.h>
#include<stdlib.h>
void tower(int x);
//revised version of the tolowerr function that uses 
//conditional operators instead of if else statements
int main(){
	tower('A');
	return 0;
}
void tower(int x){
	printf("%c",(x>='A')&& (x<='Z') ? 'a' + (x-'A'):x);

}