/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
public class Q9A
{
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Rows of Matrix A:");
        int rows = scan.nextInt();
        System.out.print("Enter Cols of Matrix A:");
        int common = scan.nextInt();
        System.out.print("Enter Cols of Matrix B:");
        int cols = scan.nextInt();
        int[][] A = new int[rows][common];
        System.out.println("Enter Matrix A:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < common; j++)
            {
                A[i][j] = scan.nextInt();
            }
        }
        int[][] B = new int[common][cols];
        System.out.println("Enter Matrix B:");
        for (int i = 0; i < common; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                B[i][j] = scan.nextInt();
            }
        }
        int[][] C = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                for (int k = 0; k < common; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        System.out.println("A X B : ");
        for (int[] row : C) {
            for (int element : row) {
                System.out.print(element + " ");
            }
            System.out.println();
        }
        System.out.println("Himanshu IT-B-80");
    }
}