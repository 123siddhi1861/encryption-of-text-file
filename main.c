#include<stdio.h>
#include"encrypt.h"
#include"type.h"
//#include<string.h>
int main(int argc, char *argv[])
{
	printf("enter a password\n");
	char password[10];
	scanf("%s",password);
	encrypt_decrypt(argv[1],argv[2],argv[3],password);
	return 0;
}
