// Task: Create a class Employee with private fields id and salary. 
//       Provide public methods setDetails(int id, double salary) 
//       to set both fields and displayDetails() to print the employee’s id and salary.
//       Write a program to create an Employee object, set the details, and display them.

class Main {

    public static void main(String args[]) {
        Employee e = new Employee();
        e.setDetails(234, 175000);
        e.displayDetails();
    }
}
