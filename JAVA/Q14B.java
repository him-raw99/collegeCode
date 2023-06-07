/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
public class Q14B {

    public static void main(String[] args) {
  if (args.length >= 2) {
            // Process command line arguments
            String name = args[0];
            int age = Integer.parseInt(args[1]);

            // Display the input data
            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
        } else {
            System.out.println("Insufficient command line arguments!");
        }
    }
}