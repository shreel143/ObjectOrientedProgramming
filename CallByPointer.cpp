// A program to swap two numbers using the call by pointer method.

#include <iostream>  
using namespace std;  
  
void swap_by_pointer(int *x,int *y){  
 int temp;  
 temp=*x;  
 *x=*y;  
 *y=temp;  
  
 cout<<"\nValues of numbers after swapping in swap function:"<<endl;  
 cout<<"First Number:"<<*x<<endl;  
 cout<<"Second Number:"<<*y<<endl;  
}  
  
int main()  
{  
 int a,b;  
  
 cout<<"Enter the value of first number :"<<endl;  
 cin>>a; 
LAB ASSIGNMENT NO.3 SHREEL TRIVEDI (14301032020) 
  
 cout<<"Enter the value of second number :"<<endl;  
 cin>>b;  
  
 cout<<"\nValues of numbers before swapping :"<<endl;  
 cout<<"First Number:"<<a<<endl;  
 cout<<"Second Number:"<<b<<endl;  
  
 swap_by_pointer(&a,&b);  
  
 cout<<"\nValues of numbers after swapping in main function:"<<endl;  
 cout<<"First Number:"<<a<<endl;  
 cout<<"Second Number:"<<b<<endl;  
  
 return 0;  
}
