#include "insert_new.h"
#include<stdio.h>
#include<string.h>
int insert_new_movie(char * ch,char * dt,int pr)
{

	FILE *fp;



   fp=fopen("data.txt","a+");

   if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp," %s %s %d \n",ch,dt,pr);
		printf("Recorded Successfully\n");
		fclose(fp);
		return 1;
	}
	return 0;
}


