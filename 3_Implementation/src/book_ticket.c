#include "book.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int book_ticket(char * mov,int total_seat,int * seat)
{
 struct book
{
	char name[20];
	char date[20];
	int cost;


}b;
int array[100];
int flag1=0;
	FILE *fp;

	FILE *ufp;

	int total_amount,i;


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
			if(strcmp(b.name,mov) == 0)
			{

				flag1=1;
				break;
			}
		}
		if(flag1==0)
        {
            printf("\nMovie not available\n");
            fclose(fp);
            return 0;
        }

	}
	printf("\n Record Found\n");
    printf("\n\t\tMovie name ::%s",b.name);
    printf("\n\t\tRelease Date ::%s",b.date);
    printf("\n\t\tPrice of ticket::%d\n",b.cost);
	printf("\nSelect your seats\n");
	for(int k=0;k<total_seat;k++)
    {


       if (seat[k]>100||seat[k]<1)
			{
				printf("This seat is unavailable in this theater\n");
				fclose(fp);
				return 0;

			}
		if(array[seat[k]]==1)
			{
				printf("Sorry, this seat is already booked! \n");
				fclose(fp);
				return 0;

			}

			array[seat[k]]=1;
    }
    printf("\n                                SCREEN\n\n\n");
		for (i=1;i<=100;i++)
		{
				printf("%d\t",i);
			if(i%10==0)
				printf("\n\n");
		}

    total_amount = b.cost * total_seat;
	ufp=fopen("oldTransection.txt","a");
	if(ufp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(ufp," %s %d %d %d \n",b.name,b.cost,total_seat,total_amount);
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);
	printf("\n ENJOY THE MOVIE \n");
	printf("\n\t\t Movie name : %s",b.name);
	printf("\n\t\t Movie name : %s",b.name);
	printf("\n\t\t Total seats : %d",total_seat);
	printf("\n\t\t Selected seats : ");
	for(int k=0;k<total_seat;k++)
    {
        printf("%d ",seat[k]);
    }
	printf("\n\t\t Cost per ticket : %d",b.cost);
	printf("\n\t\t Total Amount : %d\n",total_amount);
	return 1;

}


