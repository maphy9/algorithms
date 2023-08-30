#include <stdio.h>

int findBCD(int a, int b);

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The biggest common diviser is %d\n", findBCD(a, b));

    return 0;
}

int findBCD(int a, int b) {
    if(a == b) {return a;}

    int m, n;
    if(a > b) {
        m = a;
        n = b;
    } else {
        m = b;
        n = a;
    }

    int d = m % n;
    if(d == 0) {
        return n;
    } else {
        return findBCD(n, d);
    }
}