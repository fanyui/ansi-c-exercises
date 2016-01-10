#include <stdio.h>
#define IN 1
#define OUT 0
/* inside a word */
/* outside a word */
/* count lines, words, and characters in input */
main()
{
int c, nl, nw, nc, state;
state = OUT;
nl = nw = nc = 0;
while ((c = getchar()) != EOF) {
if (c == '\n')
;
if (c == ' ' || c == '\n' || c =='\t'){
state = OUT;
;

}
else if (state == OUT) {
	printf("\n");
state = IN;
putchar(c);
}
else
putchar(c);
}
return 0;
}