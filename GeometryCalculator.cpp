// A program that calculates the area and perimeter of a square and a rectangle using function overloading to handle different input parameters.

#include <iostream>  
using namespace std;  
  
int area(int m){  
 int area ;  
 area=m*m;  
 return(area);  
}  
  
int area(int x,int y){  
 int area ;  
 area=x*y;  
 return(area);  
}  
  
int perimeter(int m){  
 int peri;  
 peri=4*m;  
 return(peri);  
}  
  
int perimeter(int x, int y){  
 int peri;  
 peri=2*(x+y);  
 return(peri);  
}  
  
  
int main()  
{  
 int a,l,b;  
  
 cout<<"Enter the value of Square's side :"<<endl;  
 cin>>a;  
  
 cout<<"Enter the value of Rectangle's length :"<<endl;  
 cin>>l;  
  
 cout<<"Enter the value of Rectangle's breadth :"<<endl;  
 cin>>b;  
  
 cout<<"\nValues of Areas :"<<endl;  
 cout<<"Area of Square: "<<area(a)<<" sq unit"<<endl;  
 cout<<"Area of Rectangle: "<<area(l,b)<<" sq unit"<<endl;  
  
 cout<<"\nValues of Perimeter :"<<endl;  
 cout<<"Perimeter of Square: "<<perimeter(a)<<" units"<<endl;  
 cout<<"Perimeter of Rectangle: "<<perimeter(l,b)<<" units"<<endl;  

 return 0;  
}  
