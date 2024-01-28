// A program showcasing a single function that is a friend to two different classes, allowing it to access their private members.

#include <iostream> 
using namespace std; 

class bus; 

class car{ 
 int speed; 
 public: 
 void setVal(){ 
 cout<<"Enter speed of car: "<<endl; 
 cin>>speed;
 } 
 friend void speedDiff(car, bus); 
}; 

class bus{ 
 int speed; 
 public: 
 void setVal(){ 
 cout<<"Enter speed of car: "<<endl; 
 cin>>speed; 
 } 
 friend void speedDiff(car, bus); 
}; 

void speedDiff(car c,bus b){ 
 int Diff; 
 Diff=c.speed-b.speed; 
 cout<<"The difference between speeds is: "<<Diff<<endl; 
} 

int main(){ 
 car c; 
 bus b; 
 c.setVal(); 
 b.setVal(); 
 speedDiff(c,b); 
 return 0; 
}


