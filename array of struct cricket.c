#include<stdio.h>
struct cric
{
char name[30];
char nationality[30];
int odi;
float ba;

}
main()
{
  struct cric c[50];
  int n;
  float b;
  float ba;
  void read_cric(struct  cric c[50],int n);
  void display_cric(struct  cric c[50],int n);
 // float average_cric(struct  cric c[50],int n);

  printf("enter the number of cricket player");
  scanf("%d",&n);
  read_cric(c,n);
// b=display_cric(c,n);
 printf("the least batting avareg",b);


}
void read_cric(struct  cric c[50],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("enter the %d details",i+2);
scanf("%s%s%d%f",&c[i].name,&c[i].nationality,&c[i].odi,&c[i].ba);


}

}
void display_cric(struct  cric c[50],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("name=%s  nationality=%s  odi=%d ba=%f",c[i].name,c[i].nationality,c[i].odi,c[i].ba);
}

}
  //float average_cric(struct  cric c[50],int n)
//{
//float batting a,total=0.0;
//for(i=0;i<n;i++)
//{
//total=total+c[i].ba;
//}
//batting a=total/n;
//return(batting a);

