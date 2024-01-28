// A C++ program demonstrating the concept of a virtual base class to resolve the diamond problem in inheritance.

#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void show() {
        cout << "Function of A" << endl;
    }
};

// Class B inheriting virtually from A
class B : public virtual A {};

// Class C inheriting virtually from A
class C : public virtual A {};

// Class D inheriting from both B and C
class D : public B, public C {};

int main() {
    D fun_d;
    fun_d.show();  // This will call the show function from class A
    return 0;
}
