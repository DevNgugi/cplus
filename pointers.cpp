#include <iostream>

int main() {
    int var = 42;
    int *ptr = &var;  // Pointer to var

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Pointer (ptr) pointing to address: " << ptr << std::endl;
    std::cout << "Value at address pointed by ptr: " << *ptr << std::endl;

    return 0;
}
