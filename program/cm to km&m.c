#include <stdio.h>
void main()
{
float cm,km,m;
printf("enter the length in centimeter\n");
scanf("%f",&cm);
m=cm/100;
km=cm/100000;
printf("length in meter=%f\n",m);
printf("length in kilometer=%f\n",km);
}
