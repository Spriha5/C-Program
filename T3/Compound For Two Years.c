#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
double P,R;
double time = 2;
scanf("%lf%lf",&P,&R);
double A = P*((pow((1 + R / 100),time)));
double CI = A-P;
printf("%.2lf",CI);
return 0;
}