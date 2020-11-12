#include "admin.h"
#include<stdio.h>
#include<string.h>
int login_admin(char* aname, char* pword)
{
    char admin[10]="sriram";
    char pass[10]="admin";
    if(strcmp(aname,admin)==0 && strcmp(pword,pass)==0)
	{
    printf("Logged in successfully!!!\nWelcome admin\n");
	return 1;
	}
	else
	{
	    printf("Wrong admin name or password\n");
        return 0;

	}



}

