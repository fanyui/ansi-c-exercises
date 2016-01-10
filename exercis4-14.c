//macro swap(t,x,y)that interchange x and y which are of type t
#include<stdio.h>
#define swap(t,x,y) ##t lemp;lemp=x;x=y;y=lemp;
int main(){
	int x=5;
	int y=7;
	printf("x=%d,y=%d\n",x,y);
	swap(int,x,y);
	printf("x=%d,y=%d\n",x,y);
	return 0;
}