#include <stdio.h>
 void main()
{
int d,y,w,ds;
printf("Enter no of days\n");
 scanf("%d", &d);
y=d/365;
w=d-y*365;
ds=d-365*y+w*7; 
printf("no of year=%d\n",y);
printf("no of week=%d\n",w); 
printf("no of days-%d\n",ds);
 }
