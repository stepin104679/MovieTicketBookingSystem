#include "user.h"
#include<stdio.h>
#include<string.h>
int login_user(char* uname, char* pword)
{
    char user[10]="user01";
    char pass[10]="userpw";
    if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
    printf("Logged in Successfully!!!\nWelcome User\n");
	return 1;
	}
	else
	{
	    printf("Wrong user name or password\n");
        return 0;

	}


}
