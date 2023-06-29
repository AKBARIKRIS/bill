#include<stdio.h>
#include<conio.h>

void main()
{ int bill,total_bill,sc,unit;
  clrscr();
  printf("enter use unit =");
  scanf("%d",&unit);
  if (unit<=50)

    {
	bill=unit*0.50;
    }
  else if (unit<=150)
    {
	bill=(unit-50)*0.75+25;
    }
  else if (unit<=250)
    {
	bill=(unit-150)*1.20+100;
    }
  else
    {
	bill=(unit-250)*1.50+220;
    }

    sc=bill*20/100;
    printf("your surcharge is=%d\n",sc);
    total_bill=sc+bill;
    printf("you pay bill is =%d",total_bill);
    getch();
    }