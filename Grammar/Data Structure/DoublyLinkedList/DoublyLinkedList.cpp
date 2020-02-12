#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() : cur(nullptr), numOfData(0)
{
	head = new Node;
	tail = new Node;
	head->next = tail;
	tail->prev = head;
}

void DoublyLinkedList::LInsert(Data data)
{
	Node * newNode = new Node;
	newNode->data = data;

	tail->prev->next = newNode;
	newNode->prev = tail->prev;
	newNode->next = tail;
	tail->prev = newNode;

	numOfData++;
}

int DoublyLinkedList::LFirst(Data* pData)
{
	if (head->next == tail)
		return 0;
	cur = head->next;
	*pData = cur->data;
	return 1;
}

int DoublyLinkedList::LNext(Data* pData)
{
	if (cur->next == tail)
		return 0;
	cur = cur->next;
	*pData = cur->data;
	return 1;
}

Data DoublyLinkedList::LRemove()
{
	Node * rNode = cur;
	Data rData = rNode->data;

	cur->prev->next = cur->next;
	cur->next->prev = cur->prev;

	cur = cur->prev;

	delete rNode;
	numOfData--;
	return rData;
}

int DoublyLinkedList::LCount()
{
	return numOfData;
}
