// A C++ program that detects a division by zero exception and handles it by displaying an appropriate message before exiting the program.

#include <iostream>
using namespace std;

// Function to perform division and throw an exception if y is zero
void divide(double x, double y) {
    cout << "Inside function" << endl;
    try {
        if (y == 0.0) {
            // If y is zero, throw a double exception
            throw y; // Here, y is zero
        } else {
            cout << "Division = " << x / y << endl;
        }
    } catch (double) {
        // Catching the double exception which is thrown on division by zero
        cout << "Caught double inside function" << endl;
        throw; // Re-throwing the caught exception to be handled in main
    }
    cout << "End of function \n";
}

int main() {
    cout << "Inside main function" << endl;
    try {
        divide(10.0, 2.0); // This will succeed
        divide(20.0, 0.0); // This will cause an exception
    } catch (double) {
        // Catch block in main to handle the re-thrown exception
        cout << "Caught double inside main function" << endl;
        cout << "Cannot divide by zero, program will exit with an error message." << endl;
    }
    cout << "End of main" << endl;
    return 0;
}
