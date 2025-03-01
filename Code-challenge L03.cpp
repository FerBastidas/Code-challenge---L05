#include <iostream>
#include <string>
#include <tuple>

struct Point {
    int x, y, z;
};

int main() {
    // Part 1: Variable Initialization
    int a = 10;                   // Direct initialization
    double b{3.14};               // Uniform initialization
    std::string c("Hello");      // Direct initialization
    bool d = true;                // Copy initialization
    
    // Print initial values
    std::cout << "Initial values:" << std::endl;
    std::cout << "int: " << a << ", double: " << b << ", string: " << c << ", bool: " << d << "\n\n";

    // Part 2: References
    int& refA = a;   // Reference to 'a'
    refA = 20;       // Modifying 'a' through reference
    double& refB = b;
    refB = 2.71;
    std::string& refC = c;
    refC = "World";
    bool& refD = d;
    refD = false;
    
    // Print modified values
    std::cout << "Modified values:" << std::endl;
    std::cout << "int: " << a << ", double: " << b << ", string: " << c << ", bool: " << d << "\n\n";
    
    // Pointer Modification
    int* ptrA = &a;
    *ptrA = 100;
    std::cout << "Pointer modification:" << std::endl;
    std::cout << "int: " << a << "\n\n";

    // Part 3: Structured Binding
    Point p{5, 10, 15};
    auto [x, y, z] = p; // Unpacking struct members
    
    // Print structured binding values
    std::cout << "Structured Binding:" << std::endl;
    std::cout << "x: " << x << ", y: " << y << ", z: " << z << "\n\n";
    
    // Part 4: Identifying l-values and r-values
    // a = 42; // 'a' is an l-value, '42' is an r-value
    // int x = a + b; // 'a' and 'b' are l-values, (a + b) is an r-value
    // &a; // 'a' is an l-value, '&a' is an r-value
    // std::string s = c + " World"; // 'c' is an l-value, " World" is an r-value, (c + " World") is an r-value
    // int& refX = x; // 'x' is an l-value, 'refX' is an l-value reference
    // int&& rref = 100; // '100' is an r-value, 'rref' is an r-value reference
    
    return 0;
}
