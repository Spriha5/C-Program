#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
 char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("Vowel.");
    }
    else if((a>='a'&&a<='z'||a>='A'&&a<='Z'))
    {
        printf("Consonant.");
    
    }
    else
    {
        printf("Not an alphabet.");
    }
    
    
    return 0;
}