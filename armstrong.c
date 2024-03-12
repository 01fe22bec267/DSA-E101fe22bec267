#include<stdio.h>
main()
{
int n, arm;
int arm_dig(int n);
printf("enter the numbber");
scanf("%d",&n);
arm=arm_dig(n);

}
int arm_dig(int n)
{
int dig,a=0,t=n;
while (n!=0)
{
dig=n%10;
a=a+dig*dig*dig;
n=n/10;


}
if(t==a)
    printf("the num is armstrong/n");
else
    printf("the num isnot armstrong");



}
