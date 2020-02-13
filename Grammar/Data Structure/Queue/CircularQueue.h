#pragma once

#define LEN_QUE 5
typedef int Data;

class CircularQueue
{
public:
	CircularQueue();
	int NextIndex(int index)
	{
		if (index >= LEN_QUE-1)
			return 0;
		else
			return ++index;
	}
	void Enqueue(Data data);
	Data Dequeue();
	bool QIsEmpty();
	Data QPeek();
protected:
	int front;
	int rear;
	Data arrQue[LEN_QUE];
};

