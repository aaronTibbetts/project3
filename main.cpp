#include <cstring>
#include <iostream>
#include "util.h"
#include "minheap.h"
#include "graph.h"
#include  "stack.h"

using namespace std; 
int main(int argc, char* argv[]){

    string command;
    int typeOfGraph;
    try{
        if(argv[1]==NULL || strlen(argv[1]) == 0 || argv[2] == NULL || strlen(argv[2]) == 0){
            throw(1);
        } 

        if(strcmp("Directed", argv[1]) == 0 && (strcmp("network01.txt", argv[2]) == 0 ||strcmp("network02.txt", argv[2]) == 0 || strcmp("network03.txt", argv[2]) == 0) ){
            typeOfGraph = 1;
            result results;
            stack Stack;  
            heap minHeap; 
            read(argv[2], typeOfGraph, results);
            cin >> command;
            readCommands(command, results, Stack, minHeap);
        
        }else if (strcmp("Undirected", argv[1]) == 0 && (strcmp("network01.txt", argv[2]) == 0 ||strcmp("network02.txt", argv[2]) == 0 || strcmp("network03.txt", argv[2]) == 0) ){
            typeOfGraph = 2;
            result results;
            read(argv[2], typeOfGraph, results);
            cin >> command;
            //readCommands(command, results);
        }
        else {
            throw(1);
        }

    }

    catch(int n){
         cerr <<"Usage: ./PJ3 <GraphType> <InputFile>\n";
    }
    return 1; 
}
