#include "Heap.h"

int Heap::HIsEmpty()
{
	if (numOfData == 0)
		return true;
	else
		return false;
}


int Heap::GetPriChildIdx(int idx)
{
	if (GetLChildIndex(idx) > numOfData)
		return 0;
	else if (GetLChildIndex(idx) == numOfData)
		return GetLChildIndex(idx);
	else
	{
		if (comp(heapArr[GetLChildIndex(idx)], heapArr[GetRChildIndex(idx)]) < 0)
			return GetRChildIndex(idx);
		else
			return GetLChildIndex(idx);
	}
}

void Heap::HInsert(HData data)
{
	int index = numOfData + 1;
	
	while (index != 1)
	{
		if (comp(data, heapArr[GetParentIndex(index)]) > 0 )
		{
			heapArr[index] = heapArr[GetParentIndex(index)];
			index = GetParentIndex(index);
		}
		else
			break;
	}

	heapArr[index] = data;
	numOfData++;
}

HData Heap::HDelete()
{
	HData retData = heapArr[1];
	HData lastElem = heapArr[numOfData];

	int parentIdx = 1;
	int childIdx;
	while (childIdx = GetPriChildIdx(parentIdx))
	{
		if (comp(lastElem, heapArr[childIdx]) >= 0)
			break;

		heapArr[parentIdx] = heapArr[childIdx];
		parentIdx = childIdx;
	}

	heapArr[parentIdx] = lastElem;
	numOfData--;
	return retData;
}
