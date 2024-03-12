#include<stdio.h>
main()
{
int a[10],n;
int *p;
p=&a;
void read_num(int *p,int n);

void display_num(int *p,int n);
void even_num(int *p,int n);
printf("enter the num");
scanf("%d",&n);
read_num(p,n);
p=&a;
display_num(p,n);
p=&a;
even_num(p,n);
}
void read_num(int *p,int n)
{
int i;
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",p);
p++;

}
}
void display_num(int *p,int n)
{
int i;
printf("the array values are");
for(i=0;i<n;i++)
{
printf("%d\n",*p);
p++;
}

}
void even_num(int *p,int n)
{
int i;
printf("even number are");
for(i=0;i<n;i++)
{
if(*p%2==0)
{
printf("%d\n",*p);

}
p++;

}

}
