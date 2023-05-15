/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
public class Q10A
{
    public interface Shape {
        double calculateArea();
    }
    public static class Circle implements Shape 
    {
        private double radius;
        public Circle(double radius) {this.radius = radius;}
        public double calculateArea() 
        {
            return 22 /7 * radius * radius;
        }
    }

    public static class Rectangle implements Shape {

        private double length;
        private double width;
        public Rectangle(double length, double width) {
            this.length = length;
            this.width = width;
        }
        public double calculateArea() {
            return length * width;
        }
    }
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        
        Shape[] shapes = new Shape[2];
        shapes[0] = new Circle(7);
        shapes[1] = new Rectangle(10, 20);

        for (Shape shape : shapes) {
            System.out.println("Area: " + shape.calculateArea());
        }
        
        System.out.println("\nHimanshu IT-B-80");
    }
}