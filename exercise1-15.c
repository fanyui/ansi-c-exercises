#include<stdio.h>
void fahr_to_celsius(int min,int step,int max);
int main(){
	
fahr_to_celsius(5,5,50);
}
void fahr_to_celsius(int lower,int step,int upper){
	float fahr, celsius;
	fahr = lower;
	printf("fahr\t celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}