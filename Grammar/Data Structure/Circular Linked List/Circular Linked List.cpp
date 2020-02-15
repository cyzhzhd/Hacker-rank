#include "CLL.h"
#include <iostream>

int main()
{
	CLL list;
	int data(0);
	list.LInsert(4);
	list.LInsert(5);
	list.LInsert(6);
	list.FInsert(3);
	list.FInsert(2);
	int num = list.Count();
	std::cout << "Count: " << num << std::endl; 
	if (list.First(&data))
	{
		std::cout << data << std::endl;
		for (int i = 0; i < num*3; ++i)
		{
			list.Next(&data);
			std::cout << data << std::endl;
		}
	}


	std::cout << "--------------------------------" << std::endl;
	std::cout << "Count: " << list.Count() << std::endl;
	while (list.Next(&data))
	{
		std::cout << list.Remove() << std::endl;
	}
	list.LInsert(6);
	list.FInsert(3);
	num = list.Count();
	std::cout << "Count: " << num << std::endl;
	if (list.First(&data))
	{
		std::cout << data << std::endl;
		for (int i = 0; i < num-1 ; ++i)
		{
			list.Next(&data);
			std::cout << data << std::endl;
		}
	}
}
