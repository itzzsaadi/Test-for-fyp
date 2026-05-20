#include <iostream>

class Greeter {
public:
    void greet() const { std::cout << "Hi from Greeter" << std::endl; }
};

int main() {
    Greeter g;
    g.greet();
    return 0;
}
