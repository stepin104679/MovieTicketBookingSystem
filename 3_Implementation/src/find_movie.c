#include "find.h"
#include<stdio.h>
#include<string.h>
int find_movie(char * ch) //find details
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


	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %d",b.name,b.date,&b.cost);
			if(strcmp(b.name,ch) == 0)
			{
				printf("\n Record Found\n");
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie date ::%s",b.date);
				printf("\n\t\tprice of ticket ::%d\n",b.cost);
				return 1;
			}
		}

    }
	printf("\nMovie not available\n");
            return 0;


}
