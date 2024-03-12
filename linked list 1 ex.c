#include<stdio.h>
#define NULL0;
struct stud
{

char name[39];
int rno;
float  ht;
struct stud* link;
};
main()
{
struct stud *head  ,*ptr2,*start;
struct stud *ptr1;
head=NULL;

ptr1=(struct stud*)malloc(sizeof(struct stud));
head=ptr1;

printf("enter the details of a student\n");
scanf("%s%d%f",&ptr1->name,&ptr1->rno,&ptr1->ht);
ptr1->link=NULL;

ptr2=ptr1;
ptr1=(struct stud*)malloc(sizeof(struct stud));


printf("enter the details of a student\n");
scanf("%s%d%f",&ptr1->name,&ptr1->rno,&ptr1->ht);
head->link=ptr1;
ptr1->link=NULL;
ptr2=ptr1;


ptr1=(struct stud*)malloc(sizeof(struct stud));


printf("enter the details of a student\n");
scanf("%s%d%f",&ptr1->name,&ptr1->rno,&ptr1->ht);
ptr2->link=ptr1;

ptr1->link=NULL;


start=head;
printf("linked  list of students is\n");
while(start->link!=NULL)
{


printf("name=%s   rollno=%d  height=%f \n",start->name,start->rno,start->ht);
start=start->link;

}
printf("name=%s   rollno=%d  height=%f \n",start->name,start->rno,start->ht);


}
