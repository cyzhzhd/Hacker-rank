#pragma once

typedef int Data;
class Node
{
public:
	Data data;
	Node* next;
	Node()
	{
		data = 0;
		next = nullptr;
	}

};
class CLL
{
public:
	CLL();
	void FInsert(Data data);
	void LInsert(Data data);
	int First(Data* pData);
	int Next(Data* pData);
	Data Remove();
	int Count();
protected:
	Node* tail;
	Node* cur;
	Node* before;
	int numOfData;
};

