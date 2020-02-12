#include "ArrayStack.h"
#include <iostream>

int main()
{
	ArrayStack stack;
	stack.Push(3);
	stack.Push(1);
	stack.Push(5);
	stack.Push(4);

	Data data = stack.Peek();
	std::cout << "Peek: " << data << std::endl;

	while(!stack.IsEmpty())
		std::cout << "Pop: " << stack.Pop() << std::endl;

}
