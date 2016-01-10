 #include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp,*fw;
	int  cp,cw;
	fp=fopen("name.c","r");
	fw=fopen("new.c","w");
	if (fw==NULL)
		perror("cannot open the newfile\n");
	//check if original file was opened successfully
	if  (fp==NULL)
		perror("unable to to open file\n ");
	else{
		while(!feof(fp)){
			cp=fgetc(fp);
			if(cp=='/')
				continue;
			else if(feof(fp))
				ungetc(cp,fp);
			else
				fputc(cp,fw);
		}

	}
	fclose(fp);
	fclose(fw);
	rename("new.c","name.c");
}