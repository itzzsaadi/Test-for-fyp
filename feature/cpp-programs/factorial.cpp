#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i) res *= i;
    return res;
}

int main() {
    int n = 10;
    std::cout << n << "! = " << factorial(n) << std::endl;
    return 0;
}
