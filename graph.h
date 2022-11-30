#ifndef GRAPH_H
#define GRAPH_H
#include <string>


using namespace std; 
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
    float weight;
    edge* next;
};

struct result{
    edge ** ADJ;
    VERTEX ** V;
    int size;
};

void singlePair(int source, int destination);

void singleSource(int source);

void printPath(int s, int t);

void printLength(int s, int t);

void printAdj(result &results); 


#endif