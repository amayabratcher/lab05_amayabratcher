// heap.cpp
// Amaya Bratcher

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){

vdata.push_back(value);
int idx = (vdata.size())-1;
while(idx > 0 && vdata.at((idx-1)/2) > vdata.at(idx)){
  int parentdata = vdata.at((idx-1)/2);
  vdata.at(idx) = parentdata;
  vdata.at((idx-1)/2) = value;
  idx = ((idx-1)/2);
}


}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
int idx = ((vdata.size())-1);
vdata.at(0) = vdata.at(idx);
vdata.pop_back();
idx--;
int curridx = 0;
while(curridx <= idx && (vdata.at(curridx) >(vdata.at(curridx*2+1)|| vdata.at(curridx*2+2))))


}

// Returns the minimum element in the heap
int Heap::top(){
  return vdata[0];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  return (vdata.size() == 0);
}
    