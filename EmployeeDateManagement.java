// A program that includes two classes: 'Date' for handling date information with error checking on day, month, and year, and 'Employee' containing employee number, name, and joining date. The 'Employee' class uses the 'Date' class for the joining date. The program includes appropriate constructors and methods for these classes, and a main function to create and display an 'Employee' object.

public class Date{ 
int day=1; 
int month=1; 
int year=2000; 
public Date(int d, int m, int y){ 
if (y>0&&y<=9999) 
{ 
if (m>0&&m<=12) 
{ 
if (d>0 && d<=31){ 
day=d; 
month=m; 
year=y; 
} 
else{ 
System.out.println("Invalid Entry .Please chacek input!!");} 
} 
else{ 
System.out.println("Invalid Entry .Please chacek input!!");} 
} 
else{ 
System.out.println("Invalid Entry .Please chacek input!!");} 
} 
} 
public class Employee{ 
int EId; 
String EmpName; 
Date date; 
public Employee(int Id, String n, Date d){ 
EId=Id; 
EmpName=n; 
date=d; 
} 
public void display(){
System.out.println("EId \t EmpName \t Date"); 
System.out.println(EId+"\t "+ EmpName+"\t "+date.day+"/"+date.month+"/"+date.year); } 
public static void main(String[] args){ 
Date d1= new Date(31,1,0); 
Date d2= new Date(21,1,2000); 
Date d3= new Date(20,9,2004); 
Date d4= new Date(31,13,2022); 
Date d5= new Date(35,10,2022); 
Employee emp= new Employee(101,"Vaani Singh",d3); 
emp.display();} 
}
