//exercise 1-9
#include<stdio.h>
int main(){
int blc,tab,newl;
int c,i=0,t=0;
while((c=getchar())!=EOF){
    if(c=='\t'&& t>0)
        continue;
        else if (c==' ' && t==0){
             putchar(c);
            t++;
    }
    else if (c==' ' && i==0){
             putchar(c);
            i++;
    }
    else if (c==' '&& i>0)
       continue;

    else{
        putchar(c);
        i=0;
        }
}
return 0;
}
