/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.himanshu_80;

/**
 *
 * @author Himanshu
 */
import java.util.Scanner;   
public class Q10B
{
    public static class InvalidInputException extends Exception {
        public InvalidInputException(String message) {
            super(message);
        }
    }

    public static void validateInput(String input) throws InvalidInputException {
        if (input == null || input.isEmpty() || !input.matches("[a-zA-Z]+") || input.length() > 10 || input.equals("hello")) {
            throw new InvalidInputException("Invalid input: " + input);
        }
    }
    
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        
        String input = "hello";
        try {
            validateInput(input);
        } catch (InvalidInputException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (NullPointerException | IllegalArgumentException | IllegalStateException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("Program finished.");
        }
        
        System.out.println("\nHimanshu IT-B-80");
    }
}