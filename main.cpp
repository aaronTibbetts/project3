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
            cout << "Directed Graph \n";
            typeOfGraph = 1;
            read(argv[2], typeOfGraph);
            //cin >> command,
            //readCommands(command);
        
        }else if (strcmp("Undirected", argv[1]) == 0 && (strcmp("network01.txt", argv[2]) == 0 ||strcmp("network02.txt", argv[2]) == 0 || strcmp("network03.txt", argv[2]) == 0) ){
            cout << "Undirected Graph";
            typeOfGraph = 2;
            cin >> command,
            readCommands(command);
        }
        else {
            throw(1);
        }

    }

    catch(...){
         cerr <<"Usage: ./PJ3 <GraphType> <InputFile>\n";
    }
    return 1; 
}
