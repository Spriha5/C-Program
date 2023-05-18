#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,k,n;
    scanf("%d\n%d\n%d\n",&c,&k,&n);
    double p=c*pow(k,n);
    printf("%.0lf",p);
    return 0;
}