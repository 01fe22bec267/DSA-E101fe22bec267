#include<stdio.h>
struct stud
{
char sname[30];
int rno;
float ht;
};
main()
{
struct stud s1,s2,*p,*q;

p=&s1;
q=&s2;
printf("enter name ,rno,ht 1  of student\n");
scanf("%s%d%f",&p->sname,&p->rno,&p->ht);

printf("enter name ,rno,ht 2 of student\n");
scanf("%s%d%f",&q->sname,&q->rno,&q->ht);

printf("details of 1 studnt are");
printf(" name=%s rno=%d  ht=%f",p->sname,p->rno,p->ht);


printf("details of 2studnt are");
printf(" name=%s rno=%d  ht=%f",q->sname,q->rno,q->ht);


}
