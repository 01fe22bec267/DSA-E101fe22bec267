#include<stdio.h>
struct book
{
   char title[20];
   char author[30];
   float price;
   int page;
};

main()
{
   struct book b[50];
   int n;
   float avg;
  float  average_price(struct book b[50],int n);
  void read_book(struct book b[50],int n);
  void display_book(struct book b[50],int n);
  printf("enter no of books\n");
  scanf("%d",&n);
  read_book(b,n);
  display_book(b,n);
  avg=average_price(b,n);

  printf("average price=%f\n",avg);
  }

  void read_book(struct book b[50],int n)
  {
     int i;
     printf("enter title, author, price, pages of %d book\n",n);
      for(i=0;i<n;i++)
      {
          printf("enter %d book detail\n",i+1);
          scanf("%s%s%f%d",&b[i].title,&b[i].author,&b[i].price,&b[i].page);
      }

  }


  void display_book(struct book b[50],int n)
  {
     int i;

      for(i=0;i<n;i++)
      {

          printf("title=%s\t author=%s\t price=%f\t pages=%d\n",b[i].title,b[i].author,b[i].price,b[i].page);
      }

  }

  float average_price(struct book b[50], int n)
  {

     int i;
     float total=0.0,a;

      for(i=0;i<n;i++)
      {
        total=total+b[i].price;

      }
      a=total/n;
      return(a);

  }




