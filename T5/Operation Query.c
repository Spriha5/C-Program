
  #include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int result = n;
    while (q--) {
        char op;
        int x;
        scanf(" %c %d", &op, &x);
        switch (op) {
            case '+':
                result += x;
                break;
            case '-':
                result -= x;
                break;
            case '*':
                result *= x;
                break;
            case '/':
                result /= x;
                break;
            case '%':
                result %= x;
                break;
            case '&':
                result &= x;
                break;
            case '|':
                result |= x;
                break;
            case '^':
                result ^= x;
                break;
        }
    }
    printf("%d\n", result);
    return 0;
}