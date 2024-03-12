
 #include<stdio.h>
main()
{
 float units,charges,tot_bill;
 printf("enter the units");
 scanf("%f",&units);
  if(units>=0&& units<=100)
  {
    tot_bill=1.0*units;
    printf("tot_bill=%f",tot_bill);
    }
     else if(units>=100&&units<=200)
     {

    tot_bill=100+(units-100)*1.5;

    printf("tot-bill=%f",tot_bill);
     }
     else if(units>=200&&units<=450)
     {
       tot_bill=100+150+(units-200)*2.0;
       printf("tot_bill=%f",tot_bill);

     }

  else
{
tot_bill=100+150+500+(units-450)*2.5;
printf("tot_bill=%f",tot_bill);


}

}
