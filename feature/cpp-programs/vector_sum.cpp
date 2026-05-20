#include <iostream>
#include <vector>
int main() {
    std::vector<int> v{1,2,3,4,5};
    int s = 0;
    for (int x : v) s += x;
    std::cout << "Sum: " << s << std::endl;
    return 0;
}
