#include <iostream>


// program printing numbers from 1 to n
int main() {

    int n;
    std::cin >> n;

    int i = 1;
    start: // it is a label

    if (i <= n) {
        std::cout << i << "\n";
        i++;
        goto start; // goto means that program will continue execution on the line where label 'start' is placed
    }

}