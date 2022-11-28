EXEC = PJ3
CC = g++
CFLAGS = -c -Wall
#
$(EXEC): main.o util.o minheap.o graph.o stack.o
		$(CC) -o $(EXEC) main.o util.o minheap.o graph.o stack.o
#
main.o: main.cpp util.h minheap.h graph.h stack.h
	$(CC) $(CFLAGS) main.cpp
#
util.o: util.cpp util.h 
	$(CC) $(CFLAGS) util.cpp
#
heap.o: minheap.cpp minheap.h
	$(CC) $(CFLAGS) minheap.cpp
#
graph.o: graph.cpp graph.h
	$(CC) $(CFLAGS) graph.cpp
#
stack.o: stack.cpp stack.h
	$(CC) $(CFLAGS) stack.cpp