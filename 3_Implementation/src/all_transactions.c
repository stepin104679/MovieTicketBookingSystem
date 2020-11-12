#include "transaction.h"
#include<stdio.h>
#include<stdlib.h>
int old_record()
{
	char movie[20];
	int cost,seat,amount;
	FILE *fp1;



	fp1 = fopen("oldTransection.txt","r");
	if(fp1 == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		while( (fgetc(fp1) ) != EOF )
          {

            fscanf(fp1," %s %d %d %d",movie,&cost,&seat,&amount);
            printf("\nMovie Name: %s\nTicket Price: %d\nTotal Seats: %d\nTotal Amount: %d\n",movie,cost,seat,amount);
          }
	}
	fclose(fp1);
	return 1;


}
