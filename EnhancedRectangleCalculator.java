// A modified program where the 'Rectangle' class has attributes 'length' and 'width' with default values of 1, includes member functions to calculate perimeter and area, and has set and get functions with validation for length and width to be floating-point numbers between 0.0 and 20.0.

import java.util.*; 
class Rectangle { 
 private float length, width; 
 public Rectangle() { 
 setLength( (float) 1); 
 setWidth( (float) 1); 
 } 
 public Rectangle(float l, float w) { 
 setLength(l); 
 setWidth(w); 
 } 
 public float getLength() { return length; } 
 public float getWidth() { return width; } 
 public void setLength(float l) { 
 length = l; 
 if ( l < 0.0 || l > 20.0 ) 
 length = (float) 0.0; 
 } 
 public void setWidth(float w) { 
 width= w; 
 if ( w < 0.0 || w > 20.0 ) 
 width = (float) 0.0; 
 } 
 public float area() { return length * width; } 
 public float Perimeter() { return 2*(length + width); } 
 public boolean square() { return length == width; } 
} 
class Main { 
public static void main(String args[]) 
{ 
// Object of Rectangle class is created 
Rectangle rect = new Rectangle(); 
// Assigning the value in the length variable of 
// Rectangle Class 
rect.setLength(10.854f); 
// Assigning the value in the width variable of 
// Rectangle Class 
rect.setWidth(14.65f); 
System.out.println("Length = " + rect.getLength()); 
System.out.println("Width = " + rect.getWidth()); 
// Calling of Area method of Rectangle Class 
float area = rect.area(); 
System.out.println("area is " + area); 
// Calling of Perimeter method of Rectangle Class 
float peri = rect.Perimeter(); 
System.out.println("perimeter is "+ peri); 
}
