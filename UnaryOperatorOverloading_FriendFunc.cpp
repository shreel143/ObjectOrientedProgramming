// A program demonstrating the overloading of unary operators (++ and --) for both pre and post increment/decrement using friend functions.

#include<iostream>
using namespace std;

class Value {
    int i;
public:
    Value(int val = 0) : i(val) {}

    friend Value operator++(Value &v, int); // Post-increment
    friend Value operator++(Value &v);      // Pre-increment

    void print() {
        cout << "i=" << i << endl;
    }
};

Value operator++(Value &v, int) {
    Value temp = v;
    v.i++;
    return temp;
}

Value operator++(Value &v) {
    Value temp;
    temp.i = ++v.i;
    return temp;
}

int main() {
    Value i1(5), i2(5);

    cout << "Before increment : ";
    i1.print();

    Value i3 = ++i1;
    cout << "After pre-increment : ";
    i3.print();

    cout << "Before increment : ";
    i2.print();

    Value i4 = i2++;
    cout << "After post-increment : ";
    i4.print();

    return 0;
}
