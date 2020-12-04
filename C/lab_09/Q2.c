#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
     float b_price;
     char b_name[100];
     char b_author[100];
     char variable;
};
int main()
{
     struct book b[100];
     int    ch,n,i,count = 0;
     char   temp[60];
     char A[80];
     int v;
     do
{
     printf("------------------MENU------------------------");
     printf("\nClick 1.TO ADD BOOK DETAILS.");
     printf("\nClick 2.TO DISPLAY BOOK INFORMATION.");
     printf("\nClick 3.TO DISPLAY BOOK OF SPECIFIED AUTHOR.");
     printf("\nClick 4.TO LIST THE TITLE OF SPECIFIED BOOK.");
     printf("\nClick 5.TO LIST THE COUNT OF BOOKS IN THE LIBRARY.");
     printf("\nClick 6.TO EXIT.");
     printf("\n-------------------------------------\n");
     printf("Enter Your Choice: ");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
          printf("\nHow Many Records You Want to Add: ");
          scanf("%d",&n);
          printf("-------------------------------------\n");
          printf("Add Details of %d Book\n",n);
          printf("-------------------------------------\n");
          for(i = 0 ; i < n ; i++)
          {
               printf("Book Name: ");
               scanf("%s",b[i].b_name);
               printf("Enter Author Name: ");
               scanf("%s",b[i].b_author);
               printf("Enter Book Price: ");
               scanf("%f",&b[i].b_price);
               printf("You Want to issue book or not? : ");
               scanf("%s",&b[i].variable);
               printf("\n-------------------------------------\n");
          }
          break;

           case 2:
           printf("\n\t\tDetails of All Book");
           printf("\n-----------------------------------------------------------\n");
     
          for(int m=0;m<n;m++){
               printf("Name Of Author: %s  Book Name: %s  Price: %f  Issue Status: %c \n", b[m].b_author,b[m].b_name,b[m].b_price,b[m].variable);
          } 
          // printf("\n\n");   
          break;

          case 3:
          printf("\nEnter Author Name: ");
          scanf("%s",temp);
          printf("--------------------------------------");
          for( i = 0 ; i < n ; i++)
          {
               if(strcmp(b[i].b_author,temp) == 0)
               {
                    printf("\n%s\n",b[i].b_name);
               }
          }
          break;

          case 4:
        
          printf("Enter Title Of The Book: ");
          scanf("%s",A);
          for(int k=0;k<n;k++)
          {
               int compare=strcmp(A,b[k].b_name);
               if(compare==0){
               printf("Title: %s  Name Of Author: %s  Price: %f  Issue Status: %c\n",b[k].b_name,b[k].b_author,b[k].b_price,b[k].variable);
               }
          }



          case 5:
          printf("\nTotal Number of Books in Library: %d\n",n);

          printf("-----------------------------------------\n");
          break;

          case 6 :
           exit(0);
          }

     }

     while(ch != 6);
     return 0;
}