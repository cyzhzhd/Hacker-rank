#include <iostream>
#include "Heap.h"

int DataPriorityComp(char ch1, char ch2) { return ch2 - ch1; }

int main()
{
	Heap heap(DataPriorityComp);

	heap.HInsert('A');
	heap.HInsert('B');
	heap.HInsert('D');
	std::cout << heap.HDelete() << std::endl;

	heap.HInsert('A');
	heap.HInsert('B');
	heap.HInsert('C');
	std::cout << heap.HDelete() << std::endl;
	
	std::cout << "HIsEmpty" << std::endl;
	while(!heap.HIsEmpty())
		std::cout << heap.HDelete() << std::endl;

}
