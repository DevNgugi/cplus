#include <iostream>

int main() {
    int x = 10;

    // if-else statement
    if (x > 0) {
        std::cout << "x is positive" << std::endl;
    } else {
        std::cout << "x is non-positive" << std::endl;
    }

    // for loop
    for (int i = 0; i < 5; i++) {
        std::cout << "i: " << i << std::endl;
    }    

    // while loop
    int y = 0;
    while (y < 3) {
        std::cout << "y: " << y << std::endl;
        y++;
    }

    return 0;
}
