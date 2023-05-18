#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
int time,min;
scanf("%d",&time);
scanf("%d",&min);
if (time>=4&&time<=11&&min>=0&&min<=59)
printf("Good Morning");
 else if (time>=12&&time<16&&min>=0&&min<=59)
printf("Good AfterNoon");
 else if (time>=16&&time<22&&min>=0&&min<=59)
printf("Good Evening");
 else if ((time>=22&&time<=23)||(time>=1&&time<4&&min>=0&&min<=59))
printf("Good Night");
  else
  printf("Entered wrong tiime");
    return 0;
}