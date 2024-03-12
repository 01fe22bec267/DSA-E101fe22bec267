#include<stdio.h>
struct stud
{
char sname[20];
int rno;
float ht;
}s,s1;

main()
{



printf("enter the details of 2 students/n");
printf("name=%s  rno=%d ht=%f",s.sname,s.rno,s.ht);
scanf("%s%d%f",&s.sname,&s.rno,&s.ht);

printf("name=%s rno=%d ht=%f",s1.sname,s1.rno,s1.ht);
scanf("%s%d%f",&s1.sname,&s1.rno,&s1.ht);
if(s.ht>s1.ht)
printf("name=%s  rno=%d  ht=%f",s.sname,s.rno,s.ht);
else
{


printf("name=%s  rno=%d  ht=%f",s1.sname,s1.rno,s1.ht);
}
printf("average of student=%f",(s.ht+s1.ht)/2);



}
