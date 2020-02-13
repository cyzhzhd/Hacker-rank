#include "CircularQueue.h"
#include <iostream>

CircularQueue::CircularQueue() : front(0), rear(0) {}

void CircularQueue::Enqueue(Data data)
{
	if (front == NextIndex(rear))
	{
		std::cout << "Queue is full" << std::endl;
		exit(-1);
	}
		
	rear = NextIndex(rear);
	arrQue[rear] = data;
}

Data CircularQueue::Dequeue()
{
	if (QIsEmpty())
	{
		std::cout << "Queue is empty" << std::endl;
		exit(-1);
	}
	else
	{
		front = NextIndex(front);
		return arrQue[front];
	}
}

bool CircularQueue::QIsEmpty()
{
	if (front == rear)
		return true;
	else
		return false;
}

Data CircularQueue::QPeek()
{
	if (QIsEmpty())
	{
		std::cout << "Queue is empty" << std::endl;
		exit(-1);
	}
	return arrQue[NextIndex(front)];
}
