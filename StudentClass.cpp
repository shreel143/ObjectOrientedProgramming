#include <iostream>  
using namespace std;  
  
class student{  
 int id;  
 char name[30];  
 int marks_oops;  
 int marks_daa;  
 int marks_coa;  
 static int cnt;  
  
 public:  
 void set(void);  
 void get(void);  
 int tot(void);  
};  
  
int student::cnt=1;  
  
void student::set(){  
 id=cnt;  
 cnt++;  
 cout<<"ENTER NAME :"<<endl;  
 cin>>name;  
 cout<<"ENTER MARKS IN OOPS :"<<endl;  
 cin>>marks_oops;  
 cout<<"ENTER MARKS IN DAA :"<<endl;  
 cin>>marks_daa;  
 cout<<"ENTER MARKS IN COA :"<<endl;  
 cin>>marks_coa;  
}  
  
void student::get(){ 
cout << id << " ";  
cout << name << " ";  
cout << marks_oops << " ";  
cout << marks_daa << " ";  
cout << marks_coa << " ";  
cout << tot() << " ";  
cout << endl;  
}  
  
int student::tot(){  
 int tot;  
 tot=marks_oops+marks_daa+marks_coa;  
 return tot;  
}  
  
int main()  
{  
 student std[50];  
 int i,n;  
  
 cout<<"ENTER THE NUMBER OF STUDENTS :";  
 cin>>n;  
  
 for(i=0;i<n;i++){  
 std[i].set();  
 }  
  
 cout << "Student Data - " << endl;  
  
 cout<<"ID"<<" "<<"NAME"<<" "<<"OOPS"<<" "<<"DAA"<<" "<<"COA"<<" "<<"TOTAL"<<endl;    
 for(i=0;i<n;i++){  
 std[i].get();  
 }  
  
 return 0;  
}  
