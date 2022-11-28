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

#endif