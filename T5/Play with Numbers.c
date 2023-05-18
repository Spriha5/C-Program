#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()  
{  
    int num ,i;  
    double sum = 0.0, fact;  
    scanf("%d",&num);
   
        fact = 1;  
        for(i= 1;i<= num;i++)  
        {  
            fact = fact *i; 
            sum = sum + ( i/ fact);
        }  

    printf("%lf",sum); 
    return 0;
}