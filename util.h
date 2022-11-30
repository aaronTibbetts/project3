#ifndef UTIL_H
#define UTIL_H
#include <string>
#include "graph.h"
using namespace std; 

void readCommands(string command, result &results);

void stop();

void read(char*  filename, int typeOfGraph, result &results);

#endif