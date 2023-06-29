#include<stdio.h>
#include<conio.h>

void main()
{
  char M,T,W,t,F,S,s;
  clrscr();
  char c;
  printf("press key =M \n");
  printf("press key =T \n");
  printf("press key =W \n");
  printf("press key =t \n");
  printf("press key =F \n");
  printf("press key =S \n");
  printf("press key =s \n");
  printf("enter first letar of =");

  scanf("%c",&c);
  switch(c)
  {
	case  'M'  :
	       printf("day 1 MONDAY ",M);
	       break;
	case 'T' :
	       printf("day 2 TUSEDAY ",T);
	       break;
	case 'W' :
	       printf("day 3 WEDNESDAY ",W);
	       break;
	case 't' :
	       printf("day 4 THURSDAY",t);
	       break;
	case 'F' :
	       printf("day 5 FRIDAY",F);
	       break;
	case 'S' :
	       printf("day 6 SATURDAY ",S);
	       break;
	case 's' :
	       printf("day 7 SUNDAY",s);
	       break;
	default:
		printf("plz enter proparly ");
		break;
  }
  getch();
}