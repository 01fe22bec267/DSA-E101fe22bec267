
#include<stdio.h>
main()
{
 float tot_salary,tax_paid;
 printf("enter the  tot_salary");
 scanf("%f",&tot_salary);
 if(tot_salary>=1&&tot_salary<=100000)
{
tax_paid=0;
printf("tax_paid=%f",tax_paid);

}
 else if(tot_salary>=100000&&tot_salary<=250000)
 {
 tax_paid=0+(tot_salary-100000)*0.05;
 printf("tax_paid=%f",tax_paid);
 }
 else if("tot_salary>=250000&&tot_salary<=1000000")
 {
  tax_paid=0+7500+(tot_salary-250000)*0.075;
  printf("tax_paid=%f",tax_paid);

 }
 else if(tot_salary>=1000000)
 tax_paid=0+7500+56250+(tot_salary-1000000)*0.1;
 printf("tax_paid=%f",tax_paid);
}
