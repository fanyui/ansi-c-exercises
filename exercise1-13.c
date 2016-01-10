#include <stdio.h>
#define IN 1
#define OUT 0
int A[];
/* inside a word */
/* outside a word */
/* count lines, words, and characters in input */
main()
{
int c, nl, nw, nc, state;
state = OUT;
static int i;
nl = nw = nc = 0;
while ((c = getchar()) != EOF) {
if (c == '\n')
;
if (c == ' ' || c == '\n' || c =='\t'){
state = OUT;
A[i++]=nc;
nc=0;

}
else if (state == OUT) {
state = IN;
putchar(c);
}
else{
	putchar(c);
	++nc;
}
}
printf("%d\n",nc);
return 0;
}