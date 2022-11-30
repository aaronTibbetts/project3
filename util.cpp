#include "util.h"
#include "graph.h"
#include <cstring>
#include <string>
#include <fstream>
#include <iostream>
using namespace std; 

void readCommands(string command, result &results){
    if(command.compare("Stop") == 0){
        stop();
    } else if(command.compare("SinglePair")== 0){
            int source;
            int destination;
            cin >> source;
            cin >> destination;
            //check for invalid source or destination
            //singlePair(source,destination);
            cin >> command;
            //readCommands(command);
    }else if(command.compare("SingleSource") == 0){
            int source;
            cin >> source;
            //check for invalid source;
            //singleSource(source);
            cin >>command;
            //readCommands(command);
    } else if (command.compare("PrintPath") == 0){
            int s;
            int t;
            cin >> s;
            cin >> t;
            //check for invalid
            //printPath(s,t);
            cin >> command;
            //readCommands(command);
    } else if (command.compare("PrintLength") == 0){
            int s;
            int t;
            cin >> s;
            cin >> t;
            //check for invalid
            //printLength(s,t);
            cin >> command;
            //readCommands(command);
    }else if (command.compare("PrintADJ") == 0 ){
            printAdj(results);
            cin >> command;
            readCommands(command, results);
    } else {
        cerr << "Error: Invalid command" << '\n';
        cin >> command;
        readCommands(command, results);
    }
}

void stop(){
    exit(0);
}



void read(char* filename, int typeOfGraph, result &results){
    ifstream inputFile (filename);
    int numOfVertices;
    int numOfEdges;
    int u;
    int v;
    float w;
    int edgeIndex;
    if(inputFile.is_open()){
        inputFile >> numOfVertices;
        inputFile >> numOfEdges;
        results.size = numOfVertices;
        results.V  = new VERTEX*[numOfVertices];
        results.ADJ= new edge*[numOfVertices];
        for(int i = 0; i< numOfVertices; i++ ){
            VERTEX *vert = new VERTEX();
            vert -> index = i;
            results.V[i]= vert;
            results.ADJ[i] = NULL; 
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
            node->next = results.ADJ[u-1];
            results.ADJ[u-1] = node;
             if (typeOfGraph == 2){
                edge * nodeTwo = new edge();
                nodeTwo->index = edgeIndex;
                nodeTwo->startVertex = v;
                nodeTwo->endVertex = u;
                nodeTwo->weight = w;
                nodeTwo->next = results.ADJ[v-1];
                results.ADJ[v-1] = nodeTwo;
             }
            
        }
        inputFile.close();
    } else {
        cerr << "file can't be opened!";
    }

}