#include<stdio.h>
main()
{
int n;
void add(int*n);
printf("enter the value of n \n");
scanf("%d",&n);
add(&n);
}
void add(int*x)
{
int dig,s=0;
while(*x!=0)
{
dig=*x%10;
s=s+dig;
*x=*x/10;

}
printf("s=%d\n",s);

}

