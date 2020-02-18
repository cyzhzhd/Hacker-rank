#include "NameCard.h"
#include <iostream>

NameCard::NameCard()
{
}

NameCard::NameCard(const char* iName, const char* iPhone)
{
	strcpy_s(name, iName);
	strcpy_s(phone, iPhone);
}

void NameCard::ShowNameCardInfo()
{
	std::cout << "Name: " << name << ", phone: " << phone << std::endl;
}

int NameCard::NameCompare(char* iName)
{
	return strcmp(name, iName);
}

void NameCard::ChangePhoneNum(char* iPhone)
{
	strcpy_s(phone, iPhone);
}
