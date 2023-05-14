/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
public class Q9B
{
    public static void val(int x)
    {
        x++;
    }
    public static void ref(int[] arr)
    {
        arr[0]++;
    }
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        
        int arr[] = {1,2,3,4};
        int num = 5;
        
        System.out.println("Number before Call : "+num);
        System.out.print("Array before Call : ");
        for(int x:arr)System.out.print(x+" ");
        val(num);
        ref(arr);
        System.out.println("\nNumber after Call : "+num);
        System.out.print("Array after Call : ");
        for(int x:arr)System.out.print(x+" ");
        
        
        System.out.println("\nHimanshu IT-B-80");
    }
}