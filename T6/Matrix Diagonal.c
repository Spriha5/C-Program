
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int array1[10][10],i,j,m,n;
        scanf("%d", &m);
        scanf("%d",&n);
         if(m==n)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
             
                 scanf("%d", &array1[i][j]);
        }
    }
   
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j)
                        printf("%d", array1[i][j]);
                    else
                        printf("  "); 
                }
                printf("\n"); 
            }
    }
    else
    {
        printf("Not square matrix.");
    }
}