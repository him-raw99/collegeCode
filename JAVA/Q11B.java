/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
public class Q11B
{

    interface IF1 {
        void printMessage();
    }

    interface IF2 {
        void displayMessage();
    }
    
    static class multiple implements IF1, IF2
    {
        @Override
        public void printMessage() {
            System.out.println("Hello from Interface1");
        }
        @Override
        public void displayMessage() {
            System.out.println("Hello from Interface2");
        }
    }
    

    public static void main(String args[])
    {
        multiple obj = new multiple();
        obj.printMessage();
        obj.displayMessage();
        System.out.println("\nHimanshu IT-B-80");
    }
}