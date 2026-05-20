#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i) res *= i;
    return res;
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%d! = %llu\n", n, factorial(n));
    return 0;
}
