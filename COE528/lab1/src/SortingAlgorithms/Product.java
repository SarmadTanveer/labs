/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package SortingAlgorithms;

public class Product {
    private String name; 
    private String category; 
    private int price; 
    
    
    public Product(String name, int price, String category){
    this.name = name; 
    this.price = price; 
    this.category = category;     
    }
    
    public String getName(){
    return name; 
    }
    
    public int getPrice(){
    return price; 
    }
    
    public String getCategory(){
    return category; 
    }
    
    @Override 
    public String toString(){
    return getName()+ ", " + getPrice() + ", "+getCategory();
    
    }
            
}