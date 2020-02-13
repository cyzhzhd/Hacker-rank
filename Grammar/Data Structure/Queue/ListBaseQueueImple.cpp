#include <iostream>
#include "ListBaseQueue.h"

int main()
{
	ListBaseQueue queue;
	queue.Enqueue(3);
	queue.Enqueue(5);
	queue.Enqueue(2);
	queue.Enqueue(7);

	std::cout << queue.Dequeue() << std::endl;
	std::cout << queue.Dequeue() << std::endl;
	std::cout << queue.Dequeue() << std::endl;
	std::cout << queue.Dequeue() << std::endl;

	queue.Enqueue(1);
	queue.Enqueue(4);
	queue.Enqueue(8);
	queue.Enqueue(3);
	std::cout << "QPeek: " << queue.QPeek() << std::endl;
	while (!queue.QisEmpty())
	{
		std::cout << queue.Dequeue() << std::endl;
	}
}
