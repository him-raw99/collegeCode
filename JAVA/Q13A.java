/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
public class Q13A
{
    public static void main(String args[])
    {
        System.out.println("Break:");
        for (int i = 1; i <= 10; i++) {
            if (i == 5)break;
            System.out.print(i + " ");
        }
        System.out.println();

        // Example of continue statement
        System.out.println("Continue:");
        for (int i = 1; i <= 10; i++) {
            if (i % 2 == 0)continue;
            System.out.print(i + " ");
        }
        System.out.println();
        System.out.println("\nHimanshu IT-B-80");
    }
}