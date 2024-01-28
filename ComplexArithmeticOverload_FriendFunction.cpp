// A program that performs addition, subtraction, and multiplication of two complex numbers, demonstrating operator overloading with  friend functions.

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
friend complex operator +(complex c1,complex c2); 
friend complex operator -(complex c1,complex c2); 
friend complex operator *(complex c1,complex c2); 
}; 
complex operator +(complex c1,complex c2){ 
 complex sol; 
 sol.real=c1.real+c2.real; 
 sol.img=c1.img+c2.img; 
 return sol; 
} 
complex operator -(complex c1,complex c2){ 
 complex sol; 
 sol.real=c1.real-c2.real; 
 sol.img=c1.img-c2.img; 
 return sol; 
} 
complex operator *(complex c1,complex c2){ 
 complex sol; 
 sol.real=c1.real*c2.real; 
 sol.img=c1.img*c2.img; 
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
