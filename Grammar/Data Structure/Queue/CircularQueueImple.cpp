#include <iostream>
#include "CircularQueue.h"

int main()
{
	CircularQueue queue;
	queue.Enqueue(3);
	queue.Enqueue(5);
	queue.Enqueue(2);
	std::cout << queue.Dequeue() << std::endl;
	std::cout << queue.Dequeue() << std::endl;
	queue.Enqueue(7);
	std::cout << "QPeek: "<< queue.QPeek() << std::endl;

	std::cout << queue.Dequeue() << std::endl;
	std::cout << queue.Dequeue() << std::endl;
	

	queue.Enqueue(9);
	queue.Enqueue(4);
	queue.Enqueue(4);

	while (!queue.QIsEmpty())
	{
		std::cout << queue.Dequeue() << std::endl;
	}
}
