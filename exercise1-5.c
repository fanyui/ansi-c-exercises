//exercise 1-5
#include<stdio.h>
int main(){
float celsius;
float fahr;
int lower,upper;
int step=20;
upper=300;
lower=0;
celsius=upper;
printf("celsius\tfahrenheit\n");
while(celsius>=lower){
    fahr=((9.0/5.0)*(celsius))+32.0;
    printf("%3.0f\t%6.2f\n",celsius,fahr);
    celsius=celsius-step;

}
return 0;
}
//
