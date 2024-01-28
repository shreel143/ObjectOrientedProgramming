// C++ program to handle an exception thrown by new.

#include <iostream>
using namespace std;

// Function to perform division
void divide(double x, double y) {
    cout << "Inside function" << endl;
    try {
        // Try block to check for division by zero
        if (y == 0.0) {
            // If denominator is zero, throw an exception
            throw y; // Throwing the double value that caused the issue
        } else {
            // If no exception, print the division result
            cout << "Division = " << x / y << endl;
        }
    } catch (double) {
        // Catch block for catching double type exceptions
        cout << "Caught double inside function" << endl;
        throw; // Re-throwing the caught exception to the caller
    }
    cout << "End of function \n";
}

int main() {
    cout << "Inside main" << endl;
    try {
        // Call divide function with valid arguments
        divide(20.0, 5.0); // This should work fine
        // Call divide function with zero as the denominator to trigger an exception
        divide(15.0, 0.0); // This will cause an exception
    } catch (double) {
        // Catch block in main to handle exceptions re-thrown from divide function
        cout << "Caught double inside main" << endl;
    }
    cout << "End of main" << endl;
    return 0;
}

