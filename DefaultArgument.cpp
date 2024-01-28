// A program showcasing the use of a function with default arguments for flexible function calls.

#include <iostream>  
using namespace std;  
  
int area(int x,int y=10){  
 int area ;  
 area=x*y;  
 return(area);  
}  
  
int main()  
{  
 int l,b;  
  
 cout<<"Enter the value of Rectangle's length :"<<endl;  
 cin>>l;  
  
 cout<<"Enter the value of Rectangle's breadth :"<<endl;  
 cin>>b;  
  
 cout<<"\nArea of Rectangle (when only one value is passed): "<<endl;  
 cout<<area(l)<<" sq units"<<endl;  
  
 cout<<"\nArea of Rectangle (when both values are passed): "<<endl;  
 cout<<area(l,b)<<" sq units"<<endl;  
  
 return 0;  
} 
