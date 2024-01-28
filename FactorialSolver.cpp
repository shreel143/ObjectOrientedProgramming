// A C++ program to calculate the factorial of a number, with options for both recursive and non-recursive implementations.

#include<iostream>    
using namespace std;  

int main()    
{    
int factorial(int);    
int fact,value;    
cout<<"Enter any number: ";   
//Number should be positive  
cin>>value;    
fact=factorial(value);    
cout<<"Factorial of a number is: "<<fact<<endl;    
return 0;    
}    


int factorial(int n)    
{       
  if(n==0)    
  return(1);  /*Terminating condition*/    
  else    
  {    
    return(n*factorial(n-1));        
  }    
}
