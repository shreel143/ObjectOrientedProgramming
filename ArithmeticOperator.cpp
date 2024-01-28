// A program to perform arithmetic operations (addition, subtraction, multiplication, division) on two integers based on a user-selected operator.

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;

    cout<<"ENTER NUMBERS:"<<endl;
    cin>>a>>b;
    cout<<"ENTER THE OPERATOR:"<<endl;
    cin>>op;
    
    switch (op){
       case '+':
        cout<<"SUM: "<<a+b<<endl;
        break;
       case '-':
        cout<<"DIFFERENCE: "<<a-b<<endl;
        break;
       case '*':
        cout<<"PRODUCT: "<<a*b<<endl;
        break;
       case '/':
        cout<<"DIVISION: "<<endl;
        cout<<"Quotient: "<<a/b<<endl<<"Remainder: "<<a%b<<endl;
        break;
       default:
	cout << "Invalid Selection. Please try Again." << endl;
    }
    return 0;
}
