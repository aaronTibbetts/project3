#ifndef GRAPH_H
#define GRAPH_H
#include <cstring>

struct VERTEX {
    float key;
    int parent; 
    string color;
    int index;
    int position;
};

struct edge{
    int index;
    int startVertex;
    int endVertex;
    int weight;
    edge* next;
};

void singlePair(int source, int destination);

void singleSource(int source);

void printPath(int s, int t);

void printLength(int s, int t);

void printAdj(); 


#endif