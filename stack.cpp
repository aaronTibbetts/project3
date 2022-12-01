#include "stack.h"
#include "graph.h"
#include "vertex.h"

void push(stack **Stack, VERTEX *vert , float w){
    stack * newEntry;
    newEntry = new stack;
    newEntry->weight = w; 
    newEntry->node = vert; 
    newEntry->next = *Stack; 
    *Stack = newEntry;
    
}

stack* pop(stack** Stack) {
    stack* popped = *Stack;
    *Stack = popped->next;
    return popped;
}