#include<stdio.h>
#define NULL 0
struct student
{
  char name[30];
  int rno;
  float ht;
  struct student *link;
};

main()
{
struct student *head,*start,*ptr;
head=NULL;
int ch,pos,count;
struct student* insert_at_front(struct student*,struct student *);
struct student* insert_at_end(struct student*,struct student *);
struct student* delete_at_front(struct student*);
struct student* delete_at_end(struct student*);
void display_SLL(struct student*);
int count_node(struct student *head);
struct student* insert_at_pos(struct student *head, struct student *ptr,int pos);

struct student* delete_at_pos(struct student *head,int pos);
struct student* serch_at_rno(struct student*);
do
{
   printf("1--INSERT A NODE AT FRONT\n");
   printf("2--INSERT A NODE AT END\n");
   printf("3--DELETE A NODE AT FRONT\n");
   printf("4--DELETE A NODE AT END\n");
   printf("5--DISPLAY LINKED LIST\n");
   printf("6--COUNT THE NODES\n");
   printf("7--INSERT A NODE AT POSITION\n");
   printf("8--DELETE A NODE AT POSITION\n");
  printf("9--SERCH A NODE AT STUD RNO\n");
   printf("10--EXIT\n");

   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_front(head,ptr);
            break;
    case 2: ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_end(head,ptr);
            break;
    case 3: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
               head=delete_at_front(head);
            }
            break;
    case 4:if(head==NULL)
            printf("SLL is empty\n");
            else
            {
               head=delete_at_end(head);
            }
            break;
    case 5: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
              display_SLL(head);
            }
            break;
    case 6: count=count_node(head);
                    printf("number of node=%d\n",count);
                    break;
    case 7: printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos<1 || pos>count_node(head)+1)
                        printf("inavalid position\n");
                     else
                     {
                         ptr=(struct student*)malloc(sizeof(struct student));
                        printf("enter name rollno and height of student\n");
                        scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
                          if(pos==1)
                         {
                             head=insert_at_front(head,ptr);
                         }
                         else if(pos==count_node(head)+1)
                         {
                             head=insert_at_end(head,ptr);
                         }
                         else
                         {
                             head=insert_at_pos(head,ptr,pos);
                         }
                     }
                     break;
                     case 8: printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos<1 || pos>count_node(head))
                        printf("inavalid position\n");
                     else
                     {

                          if(pos==1)
                         {
                             head=delete_at_front(head);
                         }
                         else if(pos==count_node(head)+1)
                         {
                             head=delete_at_end(head);
                         }
                         else
                         {
                             head=delete_at_pos(head,pos);
                         }
                     }
                     break;
                     case 9:if(head==NULL)
                     printf("SLL is empty");
                     else
                     {

                         head=serch_at_rno(head);
                     }

    case 10: exit(0);break;
    default:printf("Invalid choice\n");break;
   }
}while(ch!=10);
}

struct student* insert_at_front(struct student *head, struct student *ptr)
{
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      ptr->link=head;
      head=ptr;
    }
    return(head);
}

struct student* insert_at_end(struct student *head, struct student *ptr)
{
    struct student *start;
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      start=head;
      while(start->link!=NULL)
      {
         start=start->link;
      }
      start->link=ptr;
      ptr->link=NULL;
    }
    return(head);
}

struct student* delete_at_front(struct student *head)
{
    struct student *cur;
      if(head->link==NULL)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
           cur=head;
           head=head->link;
           printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",cur->name,cur->rno,cur->ht);
          free(cur);
      }
      return(head);

}


struct student* delete_at_end(struct student *head)
{
    struct student *start,*cur;
      if(head->link==NULL)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
          start=head;
      while(start->link!=NULL)
      {
          cur=start;
         start=start->link;
      }
        printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
          free(start);
          cur->link=NULL;
      }
      return(head);

}

void display_SLL(struct student *head)
{
   struct student *start;
   start=head;
   while(start->link!=NULL)
   {
       printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
       start=start->link;
   }
     printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);

}

int count_node(struct student *head)
{
     int c=0;
        struct student *start;
    if(head==NULL)
       return(c);
    else
    {
        start=head;
        while(start!=NULL)
        {
            c++;
            start=start->link;
        }
        return(c);
    }

}

struct student* insert_at_pos(struct student *head, struct student *ptr,int pos)
{
    int p=1;
    struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }
    temp->link=ptr;
    ptr->link=start;
    return(head);
};
struct student* delete_at_pos(struct student *head,int pos)
{
    int p=1;
    struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }

    printf("name=%s   rno=%d   ht=%f",start->name,start->rno,start->ht);
    temp->link=start->link;
    free(start);
    return(head);
};
struct student* serch_at_rno(struct student*head)
{

    int r;
    struct student*start;

     if(head==NULL)
     {
         printf("SLL is empty");

     }
     else
     {

         printf("enter the rollno of student\n");
         scanf("%d",&r);
         start=head;
         while(start!=NULL)
         {
             if(start->rno==r)
             {
                 printf("student found\n");
                 printf("n=%s   rno=%d   ht=%f",start->name,start->rno,start->ht);
                 break;
             }

             start=start->link;
         }
         if(start==NULL)
         {

             printf("student not found\n");
         }
     }
};
