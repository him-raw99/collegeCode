/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   

public class Q11A
{
    public static class ex {
        private static int count = 0; // Static variable

        public ex() {
            count++; // Increment the count each time a new instance is created
        }

        public static void printCount() { // Static method
            System.out.println("Number of instances created: " + count);
        }
    }
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        
        ex temp1 = new ex();
        ex temp2 = new ex();
        ex temp3 = new ex();
        
        ex.printCount();
        
        System.out.println("\nHimanshu IT-B-80");
    }
}