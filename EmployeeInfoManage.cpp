// A program to input and display an employee's details including ID, name, and salary.

#include <iostream>
using namespace std;

int main()
{
    int EmpID;
    string EmpName;
    float EmpSal;
    
    cout<<"Enter Employee ID"<<endl;
    cin>>EmpID;
    cout<<"Enter Employee Name"<<endl;
    cin>>EmpName;
    cout<<"Enter Employee Salary"<<endl<<"Rs.";
    cin>>EmpSal;

    cout<<"\nThe details of Employee are as follows-"<<endl;
    cout<<"Employee ID:"<<EmpID<<endl;
    cout<<"Employee Name:"<<EmpName<<endl;
    cout<<"Employee Salary:"<<EmpSal<<endl;
    
    return 0;
}
