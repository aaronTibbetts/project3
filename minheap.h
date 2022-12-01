#ifndef HEAP_H
#define HEAP_H

struct ELEMENT {
    int key;
};

struct heap {
    int capacity;
    int size;
    ELEMENT ** a;
};


void heapifyMin(heap &minHeap, int i);

void buildHeapMin(heap &minHeap);

void extractMin(heap &minHeap);

void insert(int key, heap &minHeap);

void decreaseKey(heap &minHeap, int pos, int newKey);

#endif