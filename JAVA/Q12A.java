/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
public class Q12A
{
    static class Parent {
        protected int num;

        public Parent(int num) {
            this.num = num;
        }

        public void printNum() {
            System.out.println("Parent class: " + num);
        }
    }

    static class Child extends Parent {
        public Child(int num) {
            super(num);
        }

        public void printNum() {
            System.out.println("Child class: " + num);
            super.printNum();
        }
    }

    public static void main(String args[])
    {
        Child child = new Child(10);
        child.printNum();
        System.out.println("\nHimanshu IT-B-80");
    }
}