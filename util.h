#ifndef UTIL_H
#define UTIL_H
#include <string>
#include "graph.h"
#include "vertex.h"
using namespace std; 

void readCommands(string command, result &results,stack &theStack, heap &minHeap);

void stop();

void read(char*  filename, int typeOfGraph, result &results);

#endif