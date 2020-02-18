
#include <iterator>
#include <iostream>
#include "ArrayList.h"

ArrayList::ArrayList() : curPosition(-1), numOfData(0) {}

void ArrayList::LInsert(Data data)
{
    if (numOfData >= list_len)
    {
        numOfData = list_len - 1;
        arr[numOfData] = data;
    }
    arr[numOfData] = data;
    numOfData++; 
}
 
int ArrayList::LFirst(Data* pData) 
{
    if (numOfData == 0)
        return 0;

    curPosition = 0;
    *pData = arr[0];
    return 1;
}

int ArrayList::LNext(Data* data)
{
    if (curPosition >= numOfData - 1)
        return 0;

    curPosition++;
    *data = arr[curPosition];
    return 1;
}

void ArrayList::LRemove(int pos)
{
    for (int i = pos; i < numOfData - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }
    numOfData--;
    curPosition--;
}

int ArrayList::LCount()
{ 
    return numOfData;
}

