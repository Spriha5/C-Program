#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
  {
    int N,B,G,I,D;
    scanf("%d %d %d %d %d",&N,&B,&G,&I,&D); 
    if((B*I)<(G*D))
    {
         printf("Funny Questions");
    }
    else if((B*I)>(G*D))
    {
         printf("Simple Questions");  
    }
    else
    {
        printf("God Knows!");
    }
    
    return 0;
}
