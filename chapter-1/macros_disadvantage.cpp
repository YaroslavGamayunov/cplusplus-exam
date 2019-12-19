#include <iostream>

#define mul(a, b) a * b

int main() {
    std::cout << mul(3 - 1, 4 + 5); // we are expecting 2 * 9 = 18, but get 3 - 1 * 4 + 5 = 4
}