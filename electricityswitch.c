
#include<stdio.h>
main()
{
  int units;
  float tot_bill;

  printf("enter units/n");
 scanf("%d",&units);
 if(units>=0)
 {


  switch(units)
  {
  case 0 ... 100:tot_bill=1*units;
                printf("tot_bill=%f",tot_bill);
                break;


  case 101 ... 200:tot_bill=100+(units-100)*3/2;
                  printf("tot_bill=%f",tot_bill);
                  break;

  case 201 ... 450:tot_bill=100+150+(units-200)*2;

  printf("tot_bill=%f",tot_bill);
                  break;
    default:tot_bill=100+150+500+(units-450)*5/2;
   printf("tot_bill=%f",tot_bill);
                  break;
  }

 }
 else
 {
     printf("invalid units");
 }


}
