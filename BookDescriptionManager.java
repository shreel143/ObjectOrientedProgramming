// A JAVA program that defines a 'Book' class with 'Book_title' and 'Book_price' attributes, utilizes getter and setter methods for these attributes, and then creates instances of the Book class to display their details.

import java.util.Scanner; 
public class Book 
{ 
 protected String title; 
 protected double price; 
  
 public void input() { 
 Scanner in = new Scanner(System.in); 
 System.out.print("Enter book title: "); 
 title = in.nextLine(); 
 System.out.print("Enter book price: "); 
 price = in.nextDouble(); 
 } 
  
 public void display() { 
 System.out.println("Book Title: " + title); 
 System.out.println("Price: " + price); 
 } 
 public static void main(String args[]) { 
 Book[] obj; 
 obj = new Book[2]; 
 for(int i=0; i<2; i++){ 
 obj[i] = new Book(); 
 } 
 for(int i=0; i<2; i++){ 
 obj[i].input(); 
 } 
 for(int i=0; i<2; i++){ 
 obj[i].display(); 
 } 
 } 
}
