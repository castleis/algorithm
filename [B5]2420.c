#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    long long int result;
    if (a >= b) {
        result = a - b;
    } else {
        result = b - a;
    }
    printf("%lld", result);
    return 0;
}