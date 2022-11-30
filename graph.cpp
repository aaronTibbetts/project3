#include "graph.h"
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