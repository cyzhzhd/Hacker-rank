#include "CLL.h"
#include <iostream>
CLL::CLL() : tail(nullptr), cur(nullptr), before(nullptr), numOfData(0)
{
}

void CLL::FInsert(Data data)
{
	Node* newNode = new Node;
	newNode->data = data;
	if (tail == NULL)
	{
		tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = tail->next;
		tail->next = newNode;
	}
	numOfData++;
}

void CLL::LInsert(Data data)
{
	Node* newNode = new Node;
	newNode->data = data;
	if (tail == NULL)
	{
		tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = tail->next;
		tail->next = newNode;
		tail = newNode;
	}
	numOfData++;
}

int CLL::First(Data* pData)
{
	if (tail == nullptr)
		return 0;
	before = tail;
	cur = tail->next;
	*pData = cur->data;
	return 1;
}

int CLL::Next(Data* pData)
{
	if (tail == nullptr)
		return 0;

	before = cur;
	cur = cur->next;
	*pData = cur->data;
	return 1;
}

Data CLL::Remove()
{
	Node* rPos = cur;
	Data rData = rPos->data;

	if (rPos == tail)
	{
		if (tail == tail->next)
			tail = nullptr;
		else
			tail = before;
	}

	before->next = cur->next;
	cur = before;

	delete rPos;
	numOfData--;
	return rData;
}

int CLL::Count()
{
	return numOfData;
}
