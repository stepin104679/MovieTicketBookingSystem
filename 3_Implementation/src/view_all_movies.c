#include<stdio.h>
#include<stdlib.h>
#include"view_all_movies.h"
int viewAll()
{

struct book
{
	char name[20];
	char date[20];
	int cost;


}b;


	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("File Not Found");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %d",b.name,b.date,&b.cost);
			{
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tMovie release date ::%s",b.date);
				printf("\n\t\tPrice of ticket ::%d",b.cost);
				printf("\n\n");
			}
		}
		fclose(fp);
		return 1;

	}


}


