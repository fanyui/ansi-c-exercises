//exercise 1-8
#include<stdio.h>
int main(){
int blc,tab,bacsl;
int c;
while((c=getchar())!=EOF){
    if (c=='\\'){
        putchar('\\');
        putchar('\\');
    }
    else if(c=='\t'){
        putchar('\\');
        putchar('t');
    }
         //putchar('t');
    else if (c=='\b')
        putchar('\b');

        else
        putchar(c);


       //s printf("tab:=%d\tblack:=%d\tnewl:=%d\n",tab,blc,newl);
}
return 0;
}
