// A program to generate and print the Fibonacci series up to the nth term.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a=0;
    int b=1;
    int c;

    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;

    while(a<=n){
        cout<<a<<"\t";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

