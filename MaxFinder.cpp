// A C++ program to determine the largest of three numbers using pointers.

#include <iostream>
using namespace std;

int main() 
{    
    float n1, n2, n3;
    float *p1,*p2,*p3;

    cout << "Enter three numbers: \n";
    cin >> n1 >> n2 >> n3;

//assigning the address of input numbers to pointers
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;


    if(*p1 >= *p2 &&  *p1 >= *p3)
        cout << "Largest number: " << *p1;

    if(*p2 >= *p1 && *p2 >= *p3)
        cout << "Largest number: " << *p2;
    
    if(*p3 >= *p1 && *p3 >= *p2)
        cout << "Largest number: " << *p3;
  
    return 0;
}

