package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
class Employee {
    private String name;
    private int age;
    private double salary;
    
    public Employee(String name, int age, double salary) {
        this.name = name;
        this.age = age;
        this.salary = salary;
    }
    
    public String getName() {
        return name;
    }
    
    public int getAge() {
        return age;
    }
    
    public double getSalary() {
        return salary;
    }
}

class EmployeeManager {
    public static Employee createEmployee(String name, int age, double salary) {
        Employee employee = new Employee(name, age, salary);
        return employee;
    }
    
    public static void displayEmployeeDetails(Employee employee) {
        System.out.println("Employee Name: " + employee.getName());
        System.out.println("Employee Age: " + employee.getAge());
        System.out.println("Employee Salary: " + employee.getSalary());
    }
}
public class Q13B {

    public static void main(String[] args) {
           System.out.println("This program was made by Himanshu Rawat");
        Employee employee = EmployeeManager.createEmployee("Raj", 30, 5000.0);
        EmployeeManager.displayEmployeeDetails(employee);
    }
}