//// list.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include "ArrayList.h"
//
//int main()
//{
//	ArrayList list;
//	int data(0);
//	list.LInsert(23);
//	list.LInsert(3);
//	list.LInsert(12);
//	list.LInsert(27);
//	if (list.LFirst(&data))
//		std::cout << data << std::endl;
//	while(list.LNext(&data))
//		std::cout << data << std::endl;
//	std::cout << list.LCount() << std::endl;
//
//	std::cout << "--------------" << std::endl;
//	list.LRemove(2);
//	if (list.LFirst(&data))
//		std::cout << data << std::endl;
//	while (list.LNext(&data))
//		std::cout << data << std::endl;
//	std::cout << list.LCount() << std::endl;
//}