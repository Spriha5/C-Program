#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int t,num;
    float s;
    double n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lf",&n);
        s=sqrt(n);
        num=s;
        if (num==s)
            printf("Perfect Square\n");
        else
            printf("Not a Perfect Square\n");
            
    }
    
    return 0;
}