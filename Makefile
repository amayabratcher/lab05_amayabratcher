#Makefile
CXX_FLAG = --std=c++11 -g


examheap: examheap.o heap.o
	g++ $(CXX_FLAG) -o examheap examheap.o heap.o
heap: heap.o
	g++ $(CXX_FLAG) -o heap heap.o
examheap.o: examheap.cpp heap.h
	g++ $(CXX_FLAG) -c examheap.cpp
heap.o: heap.cpp heap.h
	g++ $(CXX_FLAG) -c heap.cpp


clean:
	rm -f heap examheap *.o