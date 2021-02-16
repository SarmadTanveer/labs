/*Sarmad Tanveer
500668402
Sectin 2
*/
package coe528.lab3;

import java.util.ArrayList;

public class StackOfDistinctStrings {

    // Overview: StacksOfDistinctStrings are mutable, bounded
    // collection of distinct strings that operate in
    // LIFO (Last-In-First-Out) order.
    //
    // The abstraction function is:
    // AF(r) = {r.items[i].toSring | 0 <= i < r.items.size} 
    // informal: elements of the set are strings contained in items. 
    //      
    //      
    //     
    //     
    // The rep invariant is:  
    //all elements of r.items are String &&
    //for all integers i and j | 0<= i < j < items.size -> items[i].equals(items[j] == false 
    //informal: all elemtns are Strings and there are no duplicates in items.  
    //    
    //   
    //      
    // 
    //the rep     
    private ArrayList<String> items;

    // constructor
    public StackOfDistinctStrings() {
        // EFFECTS: Creates a new StackOfDistinctStrings object
        items = new ArrayList<String>();
    }

    public void push(String element) throws Exception {
        // MODIFIES: this 
        // EFFECTS: Appends the element at the top of the stack
        //          if the element is not in the stack, otherwise
        //          does nothing.
        if (element == null) {
            throw new Exception();
        }
        if (false == items.contains(element)) {
            items.add(element);
        }
    }

    public String pop() throws Exception {
        // MODIFIES: this         
        // EFFECTS: Removes an element from the top of the stack
        if (items.size() == 0) {
            throw new Exception();
        }
        return items.remove(items.size() - 1);
    }

    public boolean repOK() {
        // EFFECTS: Returns true if the rep invariant holds for this           
        //          object; otherwise returns false    
        for (int i = 0; i < items.size(); i++) {

            Object x = items.get(i);
            if (!(x instanceof String)) {
                return false;
            }

        }
        //push() makes this reduntant but a check is forced for insurance
        for (int i = 0; i < items.size(); i++) {
            for (int j = 0; j < items.size(); j++) {
                if (i != j) {
                    if ((items.get(i).equals(items.get(j)))) {
                        return false;
                    }

                }
            }

        }
        return true;
    }

    @Override
    public String toString() {
        // EFFECTS: Returns a string that contains the strings in the  
        //          stack and the top element. Implements the          
        //          abstraction function.   

        String s = "Stack: {";
        for (int i = 0; i < items.size(); i++) {
            if (i <= items.size() - 2) {
                s = s + items.get(i) + ",";
            } else {
                s = s + items.get(i) + "} \n";
            }
        }
        s = s + "Top: " + items.get(items.size() - 1);

        return s;
    }

}
