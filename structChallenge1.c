//tag name is employeeStruct
//3 members: name(char array) hireDate (int), salary (float)
//declare and initialize instance of an employee type
//read in a second employee from the console and store it in a struct of type employee
//print out the contents of each employee 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
    char name[20];
    int hireDate;
    float salary;
};

int main(){
   struct Employee p1 = {"Jenn", 2021, 99000};
  /* I over complicated this so i commented out my code and typed the solution
   char n[] = "Jenn";
   strcpy(p1.name,n);
   p1.hireDate = 2021;
   p1.salary = 40000; */
   printf("Employee: %s was hired in the year %d and makes $%.2f\n", p1.name, p1.hireDate, p1.salary);
   
   struct Employee p2;
   printf("enter an employee name: ");
   scanf("%s",p2.name);
   p2.hireDate;
   printf("enter the year the employee was hired: ");
   scanf("%d", &p2.hireDate);
   p2.salary;
   printf("enter how much the employee makes: ");
   scanf("%f", &p2.salary); 
   printf("Employee: %s was hired in the year %d and makes $%.2f\n", p2.name, p2.hireDate, p2.salary); 

}