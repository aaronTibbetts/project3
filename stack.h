#ifndef STACK_H
#define STACK_H
#include "vertex.h"


struct stack{
    float weight;
    VERTEX *node;
    stack *next; 
};

void push(stack **Stack, VERTEX *vert,  float w);

stack* pop(stack **theStack);


#endif