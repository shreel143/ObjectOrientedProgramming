// A program that overloads unary operators (++ and --) for both pre-increment/decrement and post-increment/decrement using member functions.

#include<iostream> 
using namespace std; 
class Value 
{ 
int i; 
public: 
Value(int val=0){ 
 i=val; 
} 
void print(){ 
 cout<<"i="<<i<<endl; 
} 
Value operator++(int){ 
 Value temp; 
 temp.i=i++; 
 return temp; 
} 
Value operator++(){ 
 Value temp; 
 temp.i=++i; 
 return temp; 
} 
}; 
int main(){ 
 Value i1(5); 
 Value i2(5); 
  
 cout<<"Before increment : "; 
 i1.print(); 
  
 Value i3=++i1; 
 cout<<"After pre-increment : "; 
 i3.print(); 
  
 cout<<"Before increment : "; 
 i2.print(); 
  
 Value i4=i2++; 
 cout<<"After post-increment : "; 
 i4.print(); 
  
 return 0; 
}
