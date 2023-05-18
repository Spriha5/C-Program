#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,s,d;
    scanf("%d",&a);
     scanf("%d",&s);
     scanf("%d",&d);
    a%s==0&&a%d==0?printf("Yes."):printf("No.");
    
    return 0;
}
