#include<stdio.h>
#include<string.h>
#include"encrypt.h"
#include"type.h"

status encrypt_decrypt(const char*ptr,const char *ptr1,const char *ptr2, char *pass)
{
	int ch ,i;

	char pass1[10]="read";

	int len=strlen(pass1);

	FILE *infile=fopen(ptr1,"r");
	FILE *outfile=fopen(ptr2,"w");

	if (infile==NULL)
	{
		printf("The does not exist\n");
		fclose(infile);
		fclose(outfile);
		return status_fail;
	}
	if((strcmp(ptr,"-e"))==0)
	{
		if ((strcmp(pass,pass1))==0)
		{
			while((ch=fgetc(infile))!=EOF)
			{
				ch=ch^pass[i%len];
				fputc(ch,outfile);
				i++;
			}
			fclose(infile);
			fclose(outfile);
			printf("The file has been INCRYPTED.....");
			return status_success;
		}
	}
	if((strcmp(ptr,"-d"))==0)
	{
		if ((strcmp(pass,pass1))==0)
		{
			while((ch=fgetc(infile))!=EOF)
			{
				ch=ch^pass[i%len];
				fputc(ch,outfile);
				i++;
			}
			fclose(infile);
			fclose(outfile);
			printf("The file has been DCRYPTED.....");
			return status_success;
		}
	}
}






