#include "DoublyLinkedList.h"
#include <iostream>

int main()
{
	DoublyLinkedList list;
	Data data;
	list.LInsert(3);
	list.LInsert(5);
	list.LInsert(7);
	if (list.LFirst(&data))
	{
		std::cout << data << std::endl;
		while (list.LNext(&data))
			std::cout << data << std::endl;
	}

	std::cout << "Remove" << std::endl;
	Data d = list.LRemove();

	std::cout << "search" << std::endl;
	if (list.LFirst(&data))
	{
		std::cout << data << std::endl;
		while (list.LNext(&data))
			std::cout << data << std::endl;
	}
}
