/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author IGS
 */
public class testClass {
    
    static boolean foo(int n) {  
    if(n < 0) { return false; }
    else {
        int s = n;     
        int r = 0;  
        while( s != 0 ) {
            int remainder = s % 10;
            r = r * 10 + remainder;
            s = s / 10;
            System.out.println("s: "+s);
        }
        if ( n == r ) { return true; }
        else { return false; }
    }
}

    
    public static void main (String [] args){
    
    System.out.println(foo(6));
    
    
    }
    
}
