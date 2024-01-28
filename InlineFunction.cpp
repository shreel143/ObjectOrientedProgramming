// A program demonstrating the use of an inline function to optimize function calls for performance.

#include <iostream>  
using namespace std;  
  
//area is an inline function and perimeter is normal function  
  
inline int area(int x,int y){  
 int area ;  
 area=x*y;  
 return(area);  
}  
  
int perimeter(int x, int y){  
 int peri;  
 peri=2*(x+y);  
 return(peri);  
}  
  
  
int main()  
{  
 int l,b;  
  
 cout<<"Enter the value of Rectangle's length :"<<endl;  
 cin>>l;  
  
 cout<<"Enter the value of Rectangle's breadth :"<<endl; 
 cin>>b;  
  
 cout<<"\nArea of Rectangle (inline function): "<<endl;  
 cout<<area(l,b)<<" sq units"<<endl;  
  
 cout<<"Perimeter of Square (normal function): "<<endl;  
 cout<<perimeter(l,b)<<" units"<<endl;  
  
 return 0;  
} 
