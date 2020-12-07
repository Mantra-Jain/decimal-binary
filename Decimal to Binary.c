#include <math.h>
#include <stdio.h>


long long convert(int n)
{
    long long res = 0;
    int rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        res += rem * i;
        i *= 10;
    }
    return res;
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convert(n));
    return 0;
}
