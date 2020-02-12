#pragma once
#include <iostream>

typedef int Data;

class Node
{
public:
	Data data;
	Node* next;
	Node* prev;
	Node() : next(nullptr), prev(nullptr), data(NULL)  {}
};

class DoublyLinkedList
{
public:
	DoublyLinkedList();
	void LInsert(Data data);
	int LFirst(Data* pData);
	int LNext(Data* pData);
	Data LRemove();
	int LCount();
protected:
	Node* head;
	Node* tail;
	Node* cur;
	int numOfData;
};

