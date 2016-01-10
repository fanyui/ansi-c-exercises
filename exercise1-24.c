// a mini compiler program that check for mactching braces
// matching bracket and matching single and double quotes
#include<stdio.h>
#include<stdlib.h>
struct stacknode{
	int x;
	struct stacknode *next;
};
typedef struct stacknode * CONNECT;
CONNECT head;//CREATE A HEAD OF THE STRUCTURE
// FUNTION TO CREATE NEWNODE AND RETURN
CONNECT newNode(int item, CONNECT h) {
CONNECT node = malloc(sizeof(*node));
node -> x = item;
node -> next = h;
return node;
}
//TO TEMPORALLY CHECK IF THE STACK IS WORKING IT IS OF NO USE AFTER
void traverseStack(CONNECT);
void stackpush(int x);
int stackpop();
void stackinit();





int main(int argc,char *argv[]){
	stackinit();
int ch,i,j;
int result;
FILE *fp1,*fp2;
fp1=fopen(argv[1],"r");
if (fp1==NULL)
	printf("cannot open file for reading\n");
else
{
	while (!feof(fp1)){
		ch=fgetc(fp1);
		if(ch=='{' || ch=='(' || ch=='[')
			stackpush(ch);
		else if(ch=='}' || ch==')' || ch==']'){
					result=stackpop();
					if ((result=='{'&& ch=='}') || (result=='(' && ch==')' ) || (result=='[' && ch==']'))
						continue;
					else 
						printf("error unmatched %c",result);
					break;
				}
		else 
			continue;


	}

}
traverseStack(head);
fclose(fp1);	

	return 0;

}












void traverseStack(CONNECT x){
	CONNECT t;
	t=x;
	while (t!=NULL){
		printf("%c  ",t->x);
		t=t->next;
	}
}
//FUNCTION TO POP ITEMS OFF THE STACK
int stackpop(){
	int x;
	x=head->x;
	CONNECT t;
	t=head->next;
	free(head);
	head=t;
	return x;
}
//FUNCTION TO PUSH ITEMS TO STACK
void stackpush(int x){
	head=newNode(x,head);


}
//FUNTION TO INNITIALISE THE STACK
void stackinit(){
	head=NULL;
}
