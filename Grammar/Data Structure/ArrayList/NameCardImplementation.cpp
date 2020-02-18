#include <iostream>
#include "ArrayList.h"
#include "NameCard.h"

int main()
{
	ArrayList list;
	NameCard* pData = new NameCard;
	NameCard nc1("Tony", "010-1111-2222");
	NameCard nc2("Alice", "010-2222-3333");
	NameCard nc3("Andrew", "010-3333-4444");
	list.LInsert(nc1);
	list.LInsert(nc2);
	list.LInsert(nc3);
	list.LRemove(1);

	if (list.LFirst(pData))
	{
		pData->ShowNameCardInfo();
	}
	while (list.LNext(pData))
	{
		pData->ShowNameCardInfo();
	}

}