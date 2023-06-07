/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */

import java.util.Scanner;
class A

{

private int data;

void show()

{
    System.out.print("Enter the private data: ");
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    data=n;
System.out.println(data);

}

public void display()

{
    System.out.println("Public Data: ");
System.out.println("Hello java");

}

protected int num;

}

class B extends A

{

void msg()

{
      System.out.print("Enter protected data: ");
        Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    num=n;
System.out.println(num);

}

}
public class Q15A {

    public static void main(String[] args) {
           System.out.println("This program was made by Himanshu Rawat");
     B b=new B();

b.show();

b.display();

b.msg();
    }
}