/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package coe528.lab2;

/**
 *
 * @author IGS
 */
public class Palindrome{
    
    // Effects: Checks if a give word is a palindrome (spelled the same backwards and forwards). If the word is palindrome, returns true. if null or empty (space), returns false. 
    
    public static boolean isPalindrome (String word){
    boolean isPalindrome = true; 
        
        
        if (word == null || word.equals("")){
        return false; 
        }
        int low = 0;
        int high = word.length()-1; 
    
        while (high>low){
        if (!(word.charAt(low++)==word.charAt(high--))){
            isPalindrome = false; 
        }
        
        }
     return isPalindrome;    
    }

    public static void main(String[] args) {
        if (args.length == 1) {
            if (args[0].equals("1")) {
                System.out.println(isPalindrome(null));
            } else if (args[0].equals("2")) {
                System.out.println(isPalindrome(""));
            } else if (args[0].equals("3")) {
                System.out.println(isPalindrome("deed"));
            } else if (args[0].equals("4")) {
                System.out.println(isPalindrome("abcd"));
            }
        }
    }
    
    

}
