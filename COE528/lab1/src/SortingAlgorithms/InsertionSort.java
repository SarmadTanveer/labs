/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package SortingAlgorithms;

import java.util.ArrayList;

/**
 *
 * @author IGS
 */
public class InsertionSort {

public static int [] insertionSortA(int[] array){
int [] sortedArray = array; 

for (int i= 1; i < sortedArray.length; i++){
int key = sortedArray[i]; 
int j = i-1; 

while (j>=0 && array[j]>key){
sortedArray[j+1] = sortedArray[j]; 
j = j-1; 
}

sortedArray[j+1] = key; 

}


return sortedArray; 
}

public static int[] insertionSortD(int[] array){
int [] sortedArray = array.clone(); 

for (int i= sortedArray.length-2  ; i >= 0 ; i--){
int key = sortedArray[i]; 
int j = i+1; 

while (j<=sortedArray.length -1 && sortedArray[j]>key){
sortedArray[j-1] = sortedArray[j]; 
j = j+1; 
}

sortedArray[j-1] = key; 

}


return sortedArray; 
}

public static ArrayList<Product> insertionSortA(ArrayList<Product> l){
ArrayList<Product> sortedList = new ArrayList<Product>(); 
        sortedList.addAll(l); 
        
        for (int i= 1; i < sortedList.size(); i++){
        Product key = sortedList.get(i); 
        int j = i-1; 

        while (j>=0 && (sortedList.get(j).getPrice()>key.getPrice())){
        sortedList.set(j+1, sortedList.get(j)); 
        j = j-1; 
    }

        sortedList.set(j+1, key); 

}


return sortedList; 
}

public static ArrayList<Product> insertionSortD(ArrayList<Product> l){
ArrayList<Product> sortedList = new ArrayList<Product>(); 
        sortedList.addAll(l); 
        
        for (int i= sortedList.size()-2; i >= 0; i--){
        Product key = sortedList.get(i); 
        int j = i+1; 

        while (j<=sortedList.size()-1 && (sortedList.get(j).getPrice()>key.getPrice())){
        sortedList.set(j-1, sortedList.get(j)); 
        j = j+1; 
    }

        sortedList.set(j-1, key); 

}


return sortedList; 
}




public static void main (String[] args){
ArrayList<Product> products = new ArrayList<Product>(); 
    
    
        Product p1 = new Product("apricot", 5, "produce");
        Product p2 = new Product("spinach", 2, "produce");
        Product p3 = new Product("milk", 3, "dairy");
        Product p4 = new Product("cheese", 8, "dairy");
        Product p5 = new Product("octopus", 10, "meat");
        Product p6 = new Product("chicken", 7, "meat");
        Product p7 = new Product("beef", 6, "meat");

        products.add(p1);
        products.add(p2);
        products.add(p3);
        products.add(p4);
        products.add(p5);
        products.add(p6);
        products.add(p7);
        

System.out.println("Sorted Ascending: ");        
for (Product a : insertionSortA(products)){
System.out.println(a); 
}

System.out.println("Sorted Descending: ");        
for (Product a : insertionSortD(products)){
System.out.println(a); 
}

System.out.println("Original: ");

for (Product a : products ){
System.out.println(a); 

} 

 



}    
}
