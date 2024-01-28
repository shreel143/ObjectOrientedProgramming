// A program illustrating the concept of a friend function, demonstrating access to the private members of a class.

#include <iostream> 
using namespace std; 
class Distance { 
 private: 
 int dis; 
 public: 
 friend int convert_in_meter(Distance d); 
 void get_Distance() 
 { 
 cout<<"Enter distance in kilometer"<<endl; 
 cin>>dis; 
 } 
}; 
int convert_in_meter(Distance d) { 
 d.dis *= 1000; 
 return d.dis; 
} 
int main() { 
 Distance D; 
 D.get_Distance(); 
 cout << "Distance in meter : " << convert_in_meter(D); 
 return 0; 
}
