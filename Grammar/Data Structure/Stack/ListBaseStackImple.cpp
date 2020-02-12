#include <iostream>
#include "ListBaseStack.h"

int main()
{
	ListBaseStack stack;
	stack.Push(3);
	stack.Push(1);
	stack.Push(4);
	stack.Push(7);

	Data data = stack.Peek();
	std::cout << "Peek: " << data << std::endl;

	while(!stack.IsEmpty())
		std::cout << "Pop: " << stack.Pop() << std::endl;
}
