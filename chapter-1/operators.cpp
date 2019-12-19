#include <iostream>

struct SomeClass {
    int x;
};

SomeClass &operator++(SomeClass &a) { // prefix operator
    a.x++;
    return a;
}


// postfix operator, int as a second argument means that we are dealing with postfix operation
SomeClass operator++(SomeClass &a, int) {
    SomeClass b{a.x};
    a.x++;
    return b;
}

int main() {
    // comma operator executes expression one by one left to right and then returns result of execution of the last one
    int a = 1;
    int b = 2;
    int c = 3;

    int d = (a += b, c + 1); // now a = 3, b = 2, c = 3, d = 4
    // we added brackets because compiler could not understand if we were declaring c again or just executing 'c + 1'

    std::cout << a << " " << b << " " << c << " " << d << "\n";

    // prefix/postfix increment examples
    SomeClass e{10};
    std::cout << (++e).x << "\n";
    std::cout << (e++).x << " " << e.x << "\n";

    // todo compound assignment operator, simple assignment operator, functional call operator
}