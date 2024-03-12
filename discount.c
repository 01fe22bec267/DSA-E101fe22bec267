
#include<stdio.h>
main()
{
float tot_amt,pur_amt;
printf(" enter the pur_amt" );
scanf("%f",&pur_amt);
if(pur_amt>10000)
{

tot_amt=pur_amt-0.1*pur_amt;

printf("amount to be paid=%f",tot_amt);
}
else
{
printf("amount to be paid=%f",pur_amt);

}
}
