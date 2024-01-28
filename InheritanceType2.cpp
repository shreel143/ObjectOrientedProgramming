// A C++ program showcasing different types of inheritance: public, private, and protected derivation, using a single base class and derived classes for each inheritance type.

#include <iostream>
using namespace std;

class A {
private:
    int x;
protected:
    int y;
public:
    int z;
    void get(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }
    void print() {
        cout << "Value of x : " << x << endl;
        cout << "Value of y : " << y << endl;
        cout << "Value of z : " << z << endl;
    }
};

class B : public A {
    // x is private from A
    // y is protected in B
    // z is public in B
};

class C : protected A {
    // x is private from A
    // y is protected in C
    // z is protected in C
};

class D : private A {
    // x is private from A
    // y is private in D
    // z is private in D
};

int main() {
    A a;
    B b;
    C c;
    D d;
    
    int x,y,z;
    cout << "Enter values of x, y, z respectively:" << endl;
    cin >> x >> y >> z;
    
    a.get(x,y,z); 
    cout << "Inside A class : " << endl;
    a.print(); // This will print x, y, and z values
    
    b.get(x,y,z);
    cout << "Inside B class : " << endl;
    // b.print(); This line would be valid because print() and z are public in B.
    
    // c.get(x,y,z); This line would not be valid because get() and z are protected in C.
    cout << "Inside C class : " << endl;
    // c.print(); This line would also be invalid for the same reason as above.
    
    // d.get(x,y,z); This line would not be valid because get() and z are private in D.
    cout << "Inside D class : " << endl;
    // d.print(); This line would be invalid because print() is private in D.

    return 0;
}
