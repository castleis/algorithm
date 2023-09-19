#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int a, b;
        scanf("%d%d", &a, &b);
        int result = a + b;
        printf("%d\n", result);
    }
    return 0;
}