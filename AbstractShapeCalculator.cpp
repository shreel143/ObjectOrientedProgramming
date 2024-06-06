//  C++ program that demonstrates pure virtual functions with an abstract class 'Shape', and subclasses 'Rectangle', 'Square', 'Triangle', and 'Circle' that implement the 'area()' and 'perimeter()' methods.

#include <iostream>
#include <cmath>
using namespace std;

class shape {
public:
    float dim1;
    float dim2;

    void get(float a, float b = 0) {
        dim1 = a;
        dim2 = b;
    }

    virtual float area() = 0; 
    virtual float perimeter() = 0;
};

class Rectangle : public shape {
public:
    float area() {
        return dim1 * dim2;
    }

    float perimeter() {
        return 2 * (dim1 + dim2);
    }
};

class Square : public shape {
public:
    float area() {
        return dim1 * dim1;
    }

    float perimeter() {
        return 4 * dim1;
    }
};

class Circle : public shape {
public:
    float area() {
        return 3.14 * dim1 * dim1;
    }

    float perimeter() {
        return 2 * 3.14 * dim1;
    }
};

class Triangle : public shape {
public:
    float area() {
        // Assuming dim1 is base and dim2 is height
        return 0.5 * dim1 * dim2;
    }

    float perimeter() {
        // Assuming a right-angled triangle
        float hypotenuse = sqrt((dim1 * dim1) + (dim2 * dim2));
        return dim1 + dim2 + hypotenuse;
    }
};

int main() {
    Rectangle rec;
    Square sq;
    Circle cir;
    Triangle tri;

    int n;
    float a, b;
    cout << "Enter the number for the shape that you want (1,2,3,4 for rectangle, square, circle, triangle respectively):" << endl;
    cin >> n;

    switch(n) {
        case 1:
            cout << "Shape is RECTANGLE" << endl;
            cout << "Enter the length and breadth respectively:" << endl;
            cin >> a >> b;
            rec.get(a, b);
            cout << "Perimeter: " << rec.perimeter() << " units" << endl;
            cout << "Area: " << rec.area() << " units^2" << endl;
            break;
        case 2:
            cout << "Shape is SQUARE" << endl;
            cout << "Enter the side:" << endl;
            cin >> a;
            sq.get(a);
            cout << "Perimeter: " << sq.perimeter() << " units" << endl;
            cout << "Area: " << sq.area() << " units^2" << endl;
            break;
        case 3:
            cout << "Shape is CIRCLE" << endl;
            cout << "Enter the radius:" << endl;
            cin >> a;
            cir.get(a);
            cout << "Perimeter: " << cir.perimeter() << " units" << endl;
            cout << "Area: " << cir.area() << " units^2" << endl;
            break;
        case 4:
            cout << "Shape is TRIANGLE" << endl;
            cout << "Enter the base and height of right-angled triangle respectively:" << endl;
            cin >> a >> b;
            tri.get(a, b);
            cout << "Perimeter: " << tri.perimeter() << " units" << endl;
            cout << "Area: " << tri.area() << " units^2" << endl;
            break;
        default:
            cout << "Invalid shape number!" << endl;
    }

    return 0;
}



