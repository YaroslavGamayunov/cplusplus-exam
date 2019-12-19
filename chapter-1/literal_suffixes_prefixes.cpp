#include <iostream>
#include <string>

// custom literal which converts char sequence to long long
unsigned long long operator ""_i(const char *c, unsigned long length) {
    long long value = 0;
    long long power = 1;

    for (int i = length - 1; i >= 0; i--) {
        value += power * (long long) (c[i] - '0');
        power *= 10ll;
    }
    return value;
}

int main() {

    int baseEight = 012; // '0' prefix means number in base 8
    int hexNum = 0x10; // 0x prefix means base 16
    int binNum = 0b101; // 0b is for base 2

    std::cout << baseEight << "\n"; // prints 10 since 12 in base 8 is 10 in base 10
    std::cout << hexNum << "\n"; // prints 16
    std::cout << binNum << "\n"; // prints 5

    std::cout << 123456LL * 123456LL << "\n";
    // we need to explicitly put 'LL' or 'll' suffix in order to prevent int overflow

    unsigned long long longNum = "1234567891211234"_i;
    std::cout << longNum;

    return 0;
}