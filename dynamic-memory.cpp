#include <iostream>

int main() {
    int *ptr = new int;  // Dynamically allocate memory
    *ptr = 42;

    std::cout << "Value at dynamically allocated memory: " << *ptr << std::endl;

    delete ptr;  // Free allocated memory

    return 0;
}

