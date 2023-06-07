/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
import java.util.Arrays;
public class Q12B
{
    public static void main(String args[])
    {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        System.out.println("Original array: " + Arrays.toString(arr));
        
        int n = arr.length;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        
        System.out.println("Sorted array: " + Arrays.toString(arr));
        System.out.println("\nHimanshu IT-B-80");
    }
}