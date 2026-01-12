#include <iostream>
// example of call by value from chat gpt
// Function using call by value
void incrementByValue(int &x) {
    x++;
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int num = 10;

    // Call the function with a variable
    incrementByValue(num);

    // Original value remains unchanged
    std::cout << "Outside function: " << num << std::endl;

    return 0;
}