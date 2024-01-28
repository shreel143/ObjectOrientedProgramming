// A program that performs addition, subtraction, and multiplication of two complex numbers, demonstrating operator overloading with member and friend functions.

#include<iostream> 
using namespace std; 
class complex 
{ 
int real,img; 
public: 
complex(int r=0, int i=0) 
{ 
 real=r; 
 img=i; 
} 
void print(){ 
 cout<<real<<"+"<<img<<"i"<<endl; 
} 
complex operator +(complex c); 
complex operator -(complex c); 
complex operator *(complex c); 
}; 
complex complex::operator +(complex c){ 
 complex sol; 
 sol.real=real+c.real; 
 sol.img=img+c.img; 
 return sol; 
} 
complex complex::operator -(complex c){ 
 complex sol; 
 sol.real=real-c.real; 
 sol.img=img-c.img; 
 return sol; 
} 
complex complex::operator *(complex c){ 
 complex sol; 
 sol.real=real*c.real; 
 sol.img=img*c.img; 
 return sol; 
} 
int main(){ 
 complex c1(2,5),c2(1,3); 
 complex c3=c1+c2; 
 complex c4=c1-c2; 
 complex c5=c1*c2; 
  
 cout<<"First complex number : "; 
 c1.print(); 
 cout<<"Second complex number : "; 
 c2.print(); 
 cout<<"Sum : "; 
 c3.print(); 
 cout<<"Difference : ";  
 c4.print(); 
 cout<<"Product : ";  
 c5.print(); 
 return 0; 
}
