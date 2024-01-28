// A program to convert height between centimeters and feet and inches, and vice versa.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cm,feet,inches;
    cout<<"ENTER HEIGHT IN CENTIMETER : "<<endl;
    cin>>cm;
    
    inches=cm/2.54;
    feet=inches/12;

    cout<<"HEIGHT IN CENTIMETER: "<<cm<<"cm"<<endl;
    cout<<"HEIGHT IN FEET AND INCHES: ";
    cout<<setprecision(2)<<feet<<"ft "<< setprecision(2)<<inches<<"in";
    
    return 0;
}

