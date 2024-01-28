// C++ program illustrating - single, multiple and multiclass inheritance

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "This is an animal" << endl;
    }
};

// Single Inheritance: Derived class inheriting from one base class
class Carnivores : public Animal {
public:
    Carnivores() {
        cout << "The animals who eat meat are carnivores" << endl;
    }
};

// Multilevel Inheritance: Derived class inheriting from a class which is also a derived class
class Lion : public Carnivores {
public:
    Lion() {
        cout << "Lion is an carnivore" << endl;
    }
};

// Multiple Inheritance: A class inheriting from more than one base class
class Omnivores : public Animal {
public:
    Omnivores() {
        cout << "Omnivores eat both plants and meat" << endl;
    }
};

class Bear : public Carnivores, public Omnivores {
public:
    Bear() {
        cout << "Bear is an omnivore and a carnivore" << endl;
    }
};

int main() {
    cout << "Creating a Lion object:" << endl;
    Lion lion_obj;

    cout << "\nCreating a Bear object:" << endl;
    Bear bear_obj;

    return 0;
}
