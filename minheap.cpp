#include "minheap.h"


void heapifyMin(heap &minHeap, int i){
    int smallestElement = 0;
    int leftElement = 2 * i +1; 
    int rightElement = 2 * i +2;

    if(leftElement < minHeap.size && minHeap.a[leftElement]->key < minHeap.a[i]->key){
        smallestElement = leftElement;
    } else {
        smallestElement = i;
    }
    
    if(rightElement < minHeap.size && minHeap.a[rightElement]->key < minHeap.a[smallestElement]->key){
        smallestElement = rightElement;
    } 

    if(smallestElement != i){
        ELEMENT* temp = minHeap.a[i];
        minHeap.a[i] = minHeap.a[smallestElement];
        minHeap.a[smallestElement] = temp;
        heapifyMin(minHeap,smallestElement);

    }
}

void buildHeapMin(heap &Heap){
    for(int i = Heap.size/2; i >= 0; i--){
        heapifyMin(Heap,i);
    }

}

void extractMin(heap &minHeap){
    if(minHeap.size == 1){
        minHeap.size = minHeap.size - 1;
        return;
    } 

    ELEMENT* root = minHeap.a[0];
    minHeap.a[0] = minHeap.a[minHeap.size-1];
     minHeap.size = minHeap.size -1; 
      buildHeapMin(minHeap);
}

void insert(int key, heap &Heap){
    Heap.size = Heap.size + 1;
    int i = Heap.size-1;
    ELEMENT * newElement = new ELEMENT();
    newElement->key = key;
    Heap.a[i] = newElement;
    buildHeapMin(Heap);
}

void decreaseKey(heap &minHeap, int pos, int newKey){
    if ((pos < minHeap.size) && (minHeap.a[pos]->key > newKey)){
        minHeap.a[pos]->key = newKey;
        buildHeapMin(minHeap);
    }
}