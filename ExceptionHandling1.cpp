// A C++ program demonstrating exception handling with multiple try-catch blocks for different types of exceptions.

#include <iostream>
using namespace std;

// Function to demonstrate exception handling
void Xhandler(int test) {
    try {
        // Try block starts - where exceptions can be thrown
        if (test) {
            // If test is non-zero, throw an integer exception
            throw test;
        }
        else {
            // If test is zero, throw a string exception
            throw "Value is zero";
        }
    }
    catch (int i) {
        // Catch block for integer exceptions
        // This block will execute if an integer is thrown within the try block
        cout << "Caught one! Ex. : " << i << "\n";
    }
    catch (char const* str) {
        // Catch block for string exceptions
        // This block will execute if a string is thrown within the try block
        cout << "Caught a string: " << str << "\n";
    }
    // Note: It's important that the catch blocks are ordered correctly;
    // a catch for a more general exception (like ...) should be listed last.
}

int main() {
    // Main function execution begins
    cout << "start" << endl;

    // Calling Xhandler with different values to demonstrate exception handling
    Xhandler(1); // This will throw and catch an integer exception
    Xhandler(0); // This will throw and catch a string exception
    Xhandler(2); // This will throw and catch an integer exception
    Xhandler(3); // This will throw and catch an integer exception

    // Main function execution ends
    cout << "end" << endl;
    return 0;
}
