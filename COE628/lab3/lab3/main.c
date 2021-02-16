/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: s2tanvee
 *
 * Created on February 9, 2021, 8:53 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>

 
const char *get_input(); 
char **parser(char *input); 
/*
 * 
 */
int main(int argc, char** argv) {
    char *input;
    char *tmp = (char*)malloc(15 * sizeof(char *)); 
    char **command; 
    pid_t child_pid;
    int flag = 0; 
    
    while(1){
    printf("Your Command> \n"); 
    //read input line
    input = get_input();
    //parse input 
    command = parser(input);   
    
    //set flag
    flag = strchr(command[0], '&'); 
    
    if(flag != 0){
        memcpy(tmp, command[0], strlen(command[0])-1);
        strcpy(command[0],tmp);
        printf("last char is & so parent won't wait \n"); 
    } 
    
    //start child process
    child_pid = fork(); 
    
    if (child_pid == 0){
    //this is run by the child process    
        printf("child(pid: %d) running\n", child_pid);
        execvp(command[0], command); 
        printf("execvp failed \n"); 
    }
    else {
        //wait for child process to terminate
        if(!flag){
            wait(NULL);
            printf("Parent with child (pid: %d)\n", child_pid); 
        } 
        //run parent process concurrently
        else{
        printf("Parent with child (pid: %d)\n", child_pid); 
        }
    }
    
     
    
     
    }
    }

char **parser(char *input){
    char **command = malloc(12 * sizeof(char *)); 
    char *separator = " "; 
    char *parsed; 
    int index= 0;
    
    parsed = strtok(input,separator); 
    
    while(parsed != NULL){
        command[index] = parsed; 
        index++; 
        parsed = strtok(NULL,separator); 
    } 
    
    command[index] = NULL; 
    printf("Number of words in command: %d \n", index); 
    return command; 
}

const char *get_input(){
    char buff;
    char * input = (char*)malloc(1);
    char * tmp;
    int len = 0;
    
    while((buff = getchar()) != '\n'){ 
        tmp = (char*)malloc(len);
        memcpy(tmp, input, len);
        len++;
        input = (char *)realloc(input,len);
        memcpy(input, tmp, len);
        input[len-1] = buff;
    }
    
    return input;
}
