#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    int result = add(3, 4);  // Function call
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
