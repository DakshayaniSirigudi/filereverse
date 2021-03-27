#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *f1,*f2;
	char c,n,x;
	printf("Input to the reverse function\n");
	f1=fopen("TEXT1","w");
	while((c=getchar())!=EOF);
	{
		putc(c,f1);
	}
	fclose(f1);
	printf("output\n");
	f1=fopen("TEXT1","r");
	while((c=getc(f1))!=EOF);
	{
		x=strrev(char *c);
		printf("%s",x);
	}
	fclose(f1);
	f1=fopen("TEXT1","r");
	f2=fopen("TEXT2","w");
	fscanf(f1,"%s",c);
	fprintf(f2,"%s",n);
	fclose(f1);
	fclose(f2);
	return 0;
}
