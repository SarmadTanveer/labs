//Sarmad Tanveer
//500668402
package coe528.lab4;

import java.io.*; 
import java.util.Scanner; 


public class Record {
    // Name of the associated file 
    private String filename;
    
    //Singleton object 
    private static Record instance; 
    
    // The Constructor
    private Record(String n){
    filename = n; 
    }
    
    //Effects: Instantiates and returns a Singleton object of this class
    //Modifies: instance
    public static Record getInstance(){
    if (instance == null){
    instance = new Record("./record.txt"); 
    }
    return instance; 
    
    }
    //Effects: Reads and prints the contents of the associated
    //file to the standard output. 
    public void read(){
    File file = new File(instance.filename);
       
        try {
    Scanner reader = new Scanner(file); 
    while(reader.hasNext()){
    System.out.println(reader.nextLine());
    }
    reader.close();
    } catch (IOException e){
    System.out.println("An error occurred.");
    e.printStackTrace(); 
    }
    
    }
    
    // Effects: Appends the specified message, msg, to the
    //associated file. 
    public void write (String msg){
    File file = new File(instance.filename); 
        
        
    try {
        if (file.length()==0){
    FileWriter writer = new FileWriter(file); 
    writer.write(msg);
    writer.close();
    }
    
        else {
    FileWriter writer = new FileWriter(file,true); 
    writer.append(msg); 
    writer.close();
    }
        
    } catch (IOException e){
    System.out.println("An error occurred.");
    e.printStackTrace();
    }
    }
    
    public static void main(String [] args){
    //Fill the blank below that obtains the sole instance 
    //of the Recoird class.
    //(You should not invoke the Record contructor here.)
    Record r = Record.getInstance(); 
    
    // Do not modify the code below
    r.write("Hello-1\n");
    r.write("Hello-2\n");
    
    System.out.println("Currently the file record.txt " + "contains the following lines: ");
    
    r.read(); 
    
    }
    
}
