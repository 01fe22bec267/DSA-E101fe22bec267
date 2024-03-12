
#include<stdio.h>
main()
{
int n;
float avg;
float class_avg(int n);
printf("enter the num\n");
scanf("%d",&n);
avg=class_avg(n);
printf("average marks=%f\n",n);
}
float class_avg(int n)
{
int i,sum=0,m;
float average;
for(i=1;i<=n;i++)
{
printf("enter marks");
scanf("%d",&m);
sum=sum+m;
}
average=(float)sum/n;
return(average);



}



