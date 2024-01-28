// A C++ program that inputs a student's name, roll number, and marks in three subjects, then calculates and displays the student's name, roll number, and percentage score.

include <iostream>
using namespace std;

int main() {    
    int Roll_No,Mark1,Mark2,Mark3;
    float per;
    char S_Name[20],Sub1[10],Sub2[10],Sub3[10];
    cout<<"Enter the name of the student:\n";
    cin>>S_Name;
    cout<<"Enter the Roll No. of the student:\n";
    cin>>Roll_No;
    cout<<"Enter the names of subjects:\n";
    cin>>Sub1>>Sub2>>Sub3;
    cout<<"Enter the marks obtained out of 100 in"<<Sub1<<","<<Sub2<<","<<Sub3<<" respectively:\n";
    cin>>Mark1>>Mark2>>Mark3;
    per=(Mark1+Mark2+Mark3)/3;
    cout<<"Displaying marks and percentage obtained by student "<<S_Name<<"with Roll No. "<<Roll_No<<" are as follows-\n";
    cout<<Sub1<<":"<<Mark1<<endl;
    cout<<Sub2<<":"<<Mark2<<endl;
    cout<<Sub3<<":"<<Mark3<<endl;
    cout<<"Percentage:"<<per<<"%";
    return 0;
}
