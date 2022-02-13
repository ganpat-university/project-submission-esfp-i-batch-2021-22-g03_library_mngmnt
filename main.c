#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//-->THE PROJECT IS DONE BY KHSITIJ GUPTA,MANAN SOLANKI AND DEV PATEL.[CBA BATCH 11]<--
struct library
{
char bookname[50];
char author[30];
int book_price;
int pages;
};
int main()
{
struct library l[200];
char author_name[30];
char books_name[30];
int i=0,choice=0,counter=0,a_c=0,b_n=0,k=0;

while(choice!=7)
{
printf("\n1. Add book information.\n");
printf("2. Display book information.\n");
printf("3. List all books of given author.\n");
printf("4. List the title of specified book.\n");
printf("5. Number of books in the library.\n");
printf("6. For Deleting the item\n");
printf("7. for exiting our system\n");

printf ("\nEnter your choice from above --> ");
scanf("%d",&choice);

switch (choice)
{
case 1:  

printf ("Enter the book's name:\n ");
scanf ("%s",&l[k].bookname);

printf ("Enter author's name:  \n");
scanf ("%s",&l[k].author);

printf ("Enter number of pages:\n  ");
scanf ("%d",&l[k].pages);

printf ("Enter the price of the book: \n ");
scanf ("%d",&l[k].book_price);
counter++,k++;
break;
//case 2 for displaying the entered information by the user.
case 2:
printf("You have entered the following information\n");
for(i=0; i<counter; i++)
{
printf ("[Book name = %s\n",l[i].bookname);

printf ("\t Author name = %s\n",l[i].author);

printf ("\tNo. ofpages = %d\n",l[i].pages);

printf ("\t Book's price = %d\n]",l[i].book_price);
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",&author_name);
for (i=0; i<counter; i++)
{
if (strcmp(author_name, l[i].author) == 0)
printf ("[Book's name=%s , Author's name = %s , No. of pages = %d, Book's price = %d]\n",l[i].bookname,l[i].author,l[i].pages,l[i].book_price);
a_c++;
}
if (a_c==0){
    printf("The author name entered by the user does not exist in our Database, please try again.");
}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",&books_name);
for (i=0; i<counter; i++)
{
if (strcmp(books_name, l[i].bookname) == 0)
printf ("[Book's name=%s , Author's name = %s , No. of pages = %d, Book's price = %d]\n",l[i].bookname,l[i].author,l[i].pages,l[i].book_price);
b_n++;
}
if (b_n == 0)
{
    printf("The Book name entered by the user does not exist in our Database, please try again.");
}

break;

case 5:
printf("\n No of books in library : %d", counter);
break;

case 6:
printf("\nEnter the name of book you want to delete: ");
scanf("%d",&books_name);
for(i=0;i<counter;i++){
    if(strcmp(books_name,l[i].bookname)==0)
        strcpy(l[i].bookname,"Null");
        strcpy(l[i].author,"Null");
        l[i].pages=0;
        l[i].book_price = 0;
    
}
case 7:
printf("Thanks for using our system ,Hope you had a great time.\n");
printf("PLESAE VISIT OUR SYSTEM AGAIN");
exit (0); 
  }

}

return 0;

}

