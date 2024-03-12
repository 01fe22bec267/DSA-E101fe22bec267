#include<stdio.h>
int x[40],i;
main()
{
   int n,key;
   void read_array(int n);
   void display_array(int n);
   void linear_search(int n,int key);
   printf("enter how many elements\n");
   scanf("%d",&n);

   if(n>=1 && n<=40)
   {
       read_array(n);
       display_array(n);
       printf("enter the key element");
       scanf("%d",&key);
       linear_search(n,key);
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
void linear_search(int n,int key)
{
    int i,b=0,found=0;
    for(i=0;i<n;i++)
    {
        if(x[i]==key)
        {
        found=1;

        b++;
        }
}
if(found==0){
printf("key not found");
}
printf("no of key element=%d",key);
}
