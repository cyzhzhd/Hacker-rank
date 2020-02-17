#pragma once
#include <iostream>

#define HEAP_LEN 100

typedef char HData;
typedef int PriorityComp(HData d1, HData d2);

class Heap
{
public:
	Heap() : numOfData(0) {}
	Heap(PriorityComp pc) : numOfData(0), comp(pc) {}
	int HIsEmpty();
	int GetParentIndex(int idx) { return idx / 2; }
	int GetLChildIndex(int idx) { return idx * 2; }
	int GetRChildIndex(int idx) { return GetLChildIndex(idx) + 1; }
	int GetPriChildIdx(int idx);
	void HInsert(HData data);
	HData HDelete();
protected:
	int numOfData;
	PriorityComp* comp;
	HData heapArr[HEAP_LEN];
};

