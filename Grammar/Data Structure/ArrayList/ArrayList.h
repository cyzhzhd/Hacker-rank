#pragma once

#define list_len 100
#include "NameCard.h"

typedef NameCard Data;

class ArrayList
{
public:
	ArrayList();
	void LInsert(Data data);
	int LFirst(Data* pData);
	int LNext(Data* pData);
	void LRemove(int pos);
	int LCount();

private:
	Data arr[list_len];
	int numOfData;
	int curPosition;
};

