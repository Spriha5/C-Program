#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  int n, r= 0, remainder, o;
    scanf("%d", &n);
    o = n;

    while (n != 0) {
        remainder = n % 10;
        r = r* 10 + remainder;
        n /= 10;
    }
 if (o == r)
        printf("Palindrome." );
    else
        printf("Not Palindrome.");

    return 0;
}