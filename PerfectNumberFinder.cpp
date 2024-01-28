// A program to find and list all perfect numbers between 1 and 10000.A perfect number is one whose divisors add up to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. 

#include <iostream>
using namespace std;

int main()
{
    int n1=1;
    int sum;
cout<<"ALL THE PERFECT NUMBERS BETWEEN 1 TO 10000 ARE AS FOLLOWS:"<<endl;
    while (n1<=10000)
    {sum=0;
 for(int i=1;i<=n1/2;i++)
        {
          if(n1%i==0)
              {
                sum=sum+i;
               }
        }
if (sum==n1)
       {
       cout<<n1<<" IS A PERFECT NUMBER"<<endl;
       }
n1++;
    }
    return 0;
}
