/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
class First
{
    public void one() {
        System.out.println("Multiple inheritance occured.");
    }
}
class Second extends First
{
    
}
class Third extends Second
{
    
}
public class Q8B
{
    public static void main(String args[])
    {
        Third a = new Third();
        a.one();
        System.out.println("Himanshu IT-B-80");
    }
}