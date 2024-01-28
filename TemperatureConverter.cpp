// A program to convert temperature between Celsius and Fahrenheit, and vice versa.

#include <iostream>
using namespace std;

int main()
{
    float cel,far;
    cout<<"ENTER TEMPERATURE IN DEGREE CELCIUS: "<<endl;
    cin>>cel;
    
    far=(((9.0/5.0)*cel)+32);
    
    cout<<"TEMPERATURE IN CELCIUS: "<<cel<<"°C"<<endl;
    cout<<"TEMPERATURE IN FAHRENHEIT: "<<far<<"°F"<<endl;
    
    return 0;
}
