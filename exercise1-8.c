//exercise 1-8
#include<stdio.h>
int main(){
int blc,tab,newl;
int c;
while((c=getchar())!=EOF){
    if (c=='\n')
        newl++;
    else if(c=='\t')
        tab++;
    else if (c==' ')
        blc++;
        }
        printf("tab:=%d\tblack:=%d\tnewl:=%d\n",tab,blc,newl);

return 0;
}
