#include<stdio.h>
int main()
{
int d;
printf("\nEnter any day number :");
scanf("%d",&d);
switch(d)
{
case 1:
printf("\nMonday");
break;
case 2:
printf("\nTuesday");
break;
case 3:
printf("\nWednesday");
break;
case 4:
printf("\nThursday");
break;
case 5:
printf("\nFriday");
break;	
case 6:
printf("\nsaturday");
break;
case 7:
printf("\nSunday");
break;
default:
printf("\nInvalid number.");
}
}

