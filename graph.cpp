#include "graph.h"
#include "stack.h"
#include "vertex.h"
#include "minheap.h"
#include <iostream>
#include <stdio.h>

void printAdj(result &results){
   for(int i = 0; i <results.size; i++){
    edge* temp = results.ADJ[i];
    cout << "ADJ["<< i + 1 << "]:";
    while(temp != NULL){
        string buff;
        cout << "-->[" << temp->startVertex << " " << temp->endVertex << ": ";
        printf("%0.2F", temp->weight);
        cout << "]";
        temp = temp->next;
    }
    cout << endl;
   }
}

void singlePair(int source, int destination, result &results, stack &theStack, heap &minHeap){
    stack *Stack = NULL;
    minHeap.capacity = results.size;
    minHeap.a = (ELEMENT**)malloc(sizeof(ELEMENT*)* minHeap.capacity);
    minHeap.size = 0;
    
    for(int i = 0; i <minHeap.capacity; i++){
        insert(results.V[i]->index, minHeap);
        cout << minHeap.a[i]->key;
    }
   
    
    
}