// Program to convert decimal to binary

// Output

// Enter a decimal number: 19
// Step 1: 19/2, Remainder = 1, Quotient = 9
// Step 2: 9/2, Remainder = 1, Quotient = 4
// Step 3: 4/2, Remainder = 0, Quotient = 2
// Step 4: 2/2, Remainder = 0, Quotient = 1
// Step 5: 1/2, Remainder = 1, Quotient = 0
// 19 in decimal = 10011 in binary



#include <math.h>
#include <stdio.h>
long long convert(int n);
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convert(n));
    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
