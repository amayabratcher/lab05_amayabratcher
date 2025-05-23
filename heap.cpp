// heap.cpp
// Amaya Bratcher

#include "heap.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){

  vdata.push_back(value);
  int idx = (vdata.size())-1;
  while(idx > 0 && vdata.at((idx-1)/2) > vdata.at(idx)){
  swap(vdata.at(idx), vdata.at((idx-1)/2));
  idx = ((idx-1)/2);
}


}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
  if(!(this -> empty())){
    vdata[0] = vdata[vdata.size()-1];
    vdata.pop_back();
    int idx = 0;
    int smaller = 0;
    while(idx < vdata.size()){
      if(idx*2+2 >= vdata.size() && idx*2+1 >= vdata.size()){
          break;
      }
      else if(idx*2+2 >= vdata.size()){
        smaller = idx*2+1;
        if( vdata.at(idx) > vdata.at(idx*2+1)){
        swap(vdata.at(idx), vdata.at(idx*2+1));
        idx = idx*2+1;
        }
        else{
          break;
        }
      }
      else{
        smaller = vdata.at(idx*2+1) > vdata.at(idx*2+2)? (idx*2+2) : (idx*2+1);
        if(vdata.at(idx) > vdata.at(smaller)){
        swap(vdata.at(idx), vdata.at(smaller));
          idx = smaller;
      }
      else{
          break;
      }
      }
    }
  }

}

// Returns the minimum element in the heap
int Heap::top(){
  if (vdata.size() == 0){
    return -1;
  }
  
  return vdata[0];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  return (vdata.size() == 0);
}
    