
#include<stdio.h>
main()
{
int i,f1=0,f2=1,f3,sum=0,n;
printf("enter the number");
scanf("%d",&n);
 if(n==1)
 sum=sum;
 else if(n==2)
 sum=sum+f2;
 else
 {
 for(i=3;i<=n;i++)
 {

     f3=f1+f2;

 f1=f2;
 f2=f3;
  sum=sum+f3;
 }
 printf("sum=%d",sum);
 }


}
