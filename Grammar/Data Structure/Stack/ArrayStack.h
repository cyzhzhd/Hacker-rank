#pragma once

#define STACK_LEN 100
typedef int Data;

class ArrayStack
{
public:
	ArrayStack();
	int IsEmpty();
	void Push(Data data);
	Data Pop();
	Data Peek();
protected:
	Data stackArr[STACK_LEN];
	int topIndex;
};

