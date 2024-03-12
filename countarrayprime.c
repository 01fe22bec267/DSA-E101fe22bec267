#include<stdio.h>
int x[40],i;
main()
{
   int n;
   void read_array(int n);
   void display_array(int n);
   void prime_array(int n);
   printf("enter how many elements\n");
   scanf("%d",&n);
   if(n>=1 && n<=40)
   {
       read_array(n);
       display_array(n);
       prime_array(n);
   }
   else
   {
       printf("max you can enter 40 elements\n");
   }
 }
 void read_array(int n)
 {

     for(i=0;i<n;i++)
      {

      scanf("%d",&x[i]);
      }
 }
void display_array(int n)
{
     printf("the elements in the array are\n");
    for(i=0;i<n;i++)
     {
      printf("%d ",x[i]);
     }
}
void prime_array(int n)
{
    int j,prime,count=0;
    for(i=0;i<n;i++)
    {
        prime=1;
        for(j=2;j<=x[i]/2;j++)
        {
            if(x[i]%j==0)
            {


            prime=0;
            break;
            }
        }
        if(prime==1)
        count++;

    }
      printf(" \n the no of prime elements in the array=%d",count);
}
