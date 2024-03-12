#include<stdio.h>
main()
{
int i,m,n,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("enter the marks\n");
 scanf("%d",&m);
 if(m<15)
 {
 count=count+1;

 }
 }
 printf("no of students with more than 15 marks=%d",count);

}
