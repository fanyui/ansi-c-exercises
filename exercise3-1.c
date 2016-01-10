#include<stdio.h>
#include<stdlib.h>
int binsearch(int x,int v[],int n);
int main(){
	int array[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	printf("%d\n",binsearch(7,array,15));

	return 0;

}
int binsearch(int x,int v[],int n){
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(x<v[mid])
		high=mid+1;

		else low=mid+1;
		return low;

	}
	if(x=v[mid])
		return mid;
	else 
	return -1;
}