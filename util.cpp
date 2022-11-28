#include "util.h"
#include "graph.h"
#include <cstring>
#include <string>
#include <fstream>
#include <iostream>
using namespace std; 

void readCommands(string command){
    if(command.compare("Stop") == 0){
        stop();
    } else if(command.compare("SinglePair")== 0){
            int source;
            int destination;
            cin >> source;
            cin >> destination;
            //check for invalid source or destination
            singlePair(source,destination);
            cin >> command;
            readCommands(command);
    }else if(command.compare("SingleSource") == 0){
            int source;
            cin >> source;
            //check for invalid source;
            singleSource(source);
            cin >>command;
            readCommands(command);
    } else if (command.compare("PrintPath") == 0){
            int s;
            int t;
            cin >> s;
            cin >> t;
            //check for invalid
            printPath(s,t);
            cin >> command;
            readCommands(command);
    } else if (command.compare("PrintLength") == 0){
            int s;
            int t;
            cin >> s;
            cin >> t;
            //check for invalid
            printLength(s,t);
            cin >> command;
            readCommands(command);
    }else if (command.compare("PrintADJ") == 0 ){
            printAdj();
            cin >> command;
            readCommands(command);
    } else {
        cerr << "Error: Invalid command" << '\n';
        cin >> command;
        readCommands(command);
    }
}

void stop(){
    exit(0);
}

void read(char* filename, int typeOfGrpah){
    ifstream inputFile (filename);
    int numOfVertices;
    int numOfEdges;
    int u;
    int v;
    int w;
    int edgeIndex;
    edge ** head;
    if(inputFile.is_open()){
        inputFile >> numOfVertices;
        inputFile >> numOfEdges;
        VERTEX *V [numOfVertices];
        head = new edge*[numOfVertices];
        for(int i = 0; i< numOfVertices; i++ ){
            VERTEX *vert = new VERTEX();
            edge *e = new edge();  
            vert -> index = i;
            V[i] = vert;
            *(head + i) = NULL;
        }

        for (int i = 0; i < numOfEdges; i++){
            edge *node = new edge();
            inputFile >> edgeIndex;
            node->index = edgeIndex;
            inputFile >> u;
            node->startVertex = u;
            inputFile >> v; 
            node->endVertex = v;
            inputFile >> w;
            node->weight = w;
            node ->next = NULL;
        }

       
        //add new edge to ADJ and insert in front for each vertex


        inputFile.close();
    } else {
        cerr << "file can't be opened!";
    }

}