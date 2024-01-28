#include <iostream>  
using namespace std;  
  
class employee{  
 int id;  
 char name[30];  
 int sal;  
 static int cnt;  
 public:  
 void setemp();  
 void getemp();  
};  
  
int employee::cnt=101;  
  
void employee::setemp(){  
 id=cnt;  
 cnt++;  
 cout<<"ENTER NAME :"<<endl;  
 cin>>name;  
 cout<<"ENTER SALARY :"<<endl;  
 cin>>sal;  
}  
  
void employee::getemp(){  
cout << id << " ";  
cout << name << " ";  
cout << sal << " ";  
cout << endl;  
}  
  
int main()  
{  
 employee emp[50];  
 int i,n;  
  
 cout<<"ENTER NUMBER OF EMPLOYEES :";  
 cin>>n;  
  
 for(i=0;i<n;i++){  
 emp[i].setemp();  
 }  
  
 cout << "Employee Data - " << endl;  
  
 for(i=0;i<n;i++){  
 emp[i].getemp();  
 }  
  
 return 0;  
}  
