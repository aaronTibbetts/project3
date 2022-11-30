#ifndef HEAP_H
#define HEAP_H

struct ELEMENT {
    int key;
};

struct heap {
    int capacity;
    int size;
    ELEMENT * a;
};


void heapifyMin();

void buildHeapMin();

void extractMin();

void insert();

void deleteHeap();

void decreaseKey();

int findMinDeleteIndex();

#endif