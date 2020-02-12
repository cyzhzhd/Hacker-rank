#include "ArrayStack.h"
#include <iostream>
ArrayStack::ArrayStack() : topIndex(-1)    { }

int ArrayStack::IsEmpty()
{
	if (topIndex == -1)
		return true;
	return false;
}

void ArrayStack::Push(Data data)
{
	topIndex++;
	stackArr[topIndex] = data;
}

Data ArrayStack::Pop()
{
	if (this->IsEmpty())
	{
		std::cout << "No element in the array" << std::endl;
		exit(-1);
	}

	int rIdx = topIndex;
	topIndex--;
	return stackArr[rIdx];
}

Data ArrayStack::Peek()
{
	if (this->IsEmpty())
	{
		std::cout << "No element in the array" << std::endl;
		exit(-1);
	}
	return stackArr[topIndex];
}
