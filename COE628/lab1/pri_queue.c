#include <stdlib.h>
#include <stdio.h>
#include "pri_queue.h"
/** @file pri_queue.c */
static Node_ptr_t head = NULL;
/**
 * Insert a Node into a priority queue.
 * @param priority
 * @param data
 * @author YOUR NAME
 */
void PQ_insert(int priority, char * data) {
 //Create new node
    Node_ptr_t temp = malloc(sizeof(Node_t)); 
    temp->data = data; 
    temp->priority = priority; 
    temp->next = NULL; 
    
    Node_ptr_t start = malloc(sizeof(Node_t)); 
     
 //If queue is empty, insert first node
    if (PQ_get_size() == 0){
        head = malloc(sizeof(Node_t)); 
        head = temp; 
    }
 //If queue is non empty, insert node accoding to priority    
    else {
        if (head->priority < priority){
            temp->next = head; 
            head = temp; 
        }
        for(start = head; start->next != NULL; start = start->next){
            if (start-> priority > priority && start->next->priority <= priority){
                temp->next = start->next; 
                start->next = temp; 
            }
        }
    
    
    }
    
}
/**
 * Delete and return the node with the highest priority.
 * @return The highest priority Node.
 */
Node_ptr_t PQ_delete() {
  //Remove head and replace head with next node
    Node_ptr_t temp = malloc(sizeof (Node_t)); 
    if(head != NULL){
        temp = head; 
        if (head->next != NULL){
            head = head->next;     
        }
        return temp; 
    }
    return NULL;
}

/**
 * Do NOT modify this function.
 * @return A pointer to the head of the list.  (NULL if list is empty.)
 */
Node_ptr_t PQ_get_head() {
    return head;
}

/**
 * Do NOT modify this function.
 * @return the number of items in the queue
 */
int PQ_get_size() {
    int size = 0;
    Node_ptr_t tmp;
    for(tmp = head; tmp != NULL; tmp = tmp->next, size++)
        ;
    return size;
}


