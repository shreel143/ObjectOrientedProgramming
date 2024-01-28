// C++ program to handle an exception thrown by new.

#include <iostream>
using namespace std;

int main() {
    int *p; // Pointer to int

    // This loop will eventually run out of memory
    do {
        // Attempt to allocate memory for 100000 ints
        // new (nothrow) prevents throwing an exception on failure and returns a null pointer instead
        p = new(nothrow) int[100000];
        if (p) {
            cout << "Allocation OK.\n";
        } else {
            cout << "Allocation Error.\n";
            break; // Break from the loop if memory allocation fails
        }
    } while (p); // Continue looping as long as memory allocation is successful

    delete[] p; // Deallocate memory

    return 0;
}
