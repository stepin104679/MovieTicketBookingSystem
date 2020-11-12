#include <stdio.h>
#include <stdlib.h>
#include "find.h"
#include "admin.h"
#include "book.h"
#include "insert_new.h"
#include "transaction.h"
#include "user.h"
#include "test_ticket_booking.h"
#include "View_all_movies.h"

int main()
{

 int ch,pr,seat,val;
 int a[10];
 char movie[20],date[20],adname[20],usname[20],pass[20];

 	do{
	printf("\n********************************************************************");
	printf("\n");
	printf("\t Welcome To The Home Screen ");
	printf("\n");
	printf("\n********************************************************************");

	printf("\nEnter  1 To Insert A Movie");
   	printf("\nEnter  2 To View All Movies");
	printf("\nEnter  3 To Find A Movie ");
	printf("\nEnter  4 To Book Tickets");
	printf("\nEnter  5 To View All Transactions");
   	printf("\nEnter  0 To Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch);

   	switch (ch)
   	{
        case 1 :
            printf("Enter admin name: ");
            scanf("%s",adname);
            printf("Enter Password: ");
            scanf("%s",pass);
            val=login_admin(adname,pass);
            if(val==0)
              {break;}
            printf("Enter the movie name: ");
            scanf("%s",movie);
            printf("Enter the release date: ");
            scanf("%s",date);
            printf("Enter the ticket price: ");
            scanf("%d",&pr);
            insert_new_movie(movie,date,pr);
   		break;
		case 2:
		    printf("Enter user name: ");
            scanf("%s",usname);
            printf("Enter Password: ");
            scanf("%s",pass);
            val=login_user(usname,pass);
            if(val==0)
                {break;}
    		viewAll();
   		break;

		case 3:
		    printf("Enter user name: ");
            scanf("%s",usname);
            printf("Enter Password: ");
            scanf("%s",pass);
            val=login_user(usname,pass);
            if(val==0)
                {break;}
		    printf("Enter the movie name: ");
            scanf("%s",movie);
    		find_movie(movie);
   		break;

		case 4:
		    printf("Enter user name: ");
            scanf("%s",usname);
            printf("Enter Password: ");
            scanf("%s",pass);
            val=login_user(usname,pass);
            if(val==0)
                {break;}
		    printf("Enter the movie name: ");
            scanf("%s",movie);
            printf("Enter the total number of seats: ");
            scanf("%d",&seat);
            printf("Select your seats: ");
            for(int i=0;i<seat;i++)
            {
             scanf("%d",&a[i]);
            }
		book_ticket(movie,seat,a);
		break;

		case 5:
		    printf("Enter admin name: ");
            scanf("%s",adname);
            printf("Enter Password: ");
            scanf("%s",pass);
            val=login_admin(adname,pass);
            if(val==0)
                {break;}
		old_record();
		break;

    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);



}

