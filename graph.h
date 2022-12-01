#ifndef GRAPH_H
#define GRAPH_H
#include <string>
#include "stack.h"
#include "vertex.h"
#include "minheap.h"



using namespace std; 

struct edge{
    int index;
    int startVertex;
    int endVertex;
    float weight;
    edge* next;
};

struct result{
    edge ** ADJ;
    VERTEX ** V;
    int size;
};

void singlePair(int source, int destination, result &results, stack &theStack, heap &minHeap);

void singleSource(int source);

void printPath(int s, int t);

void printLength(int s, int t);

void printAdj(result &results); 


#endif