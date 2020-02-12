#include "ListBaseStack.h"
#include <iostream>
ListBaseStack::ListBaseStack() : head(nullptr) { }

void ListBaseStack::Push(Data data)
{
	Node *newNode = new Node;
	newNode->data = data;

	newNode->next = head;
	head = newNode;
}

Data ListBaseStack::Pop()
{
	if (this->IsEmpty())
	{
		std::cout << "No element in the stack" << std::endl;
		exit(-1);
	}

	Node* rPos = head;
	Data rData = rPos->data;

	head = rPos->next;
	delete rPos;
	return rData;

}

Data ListBaseStack::Peek()
{
	return head->data;
}

int ListBaseStack::IsEmpty()
{
	if (head == NULL)
		return true;
	return false;
}
