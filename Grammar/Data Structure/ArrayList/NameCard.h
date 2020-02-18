#pragma once

#define Name_LEN 30
#define PHONE_LEN 30

class NameCard
{
public:
	NameCard();
	NameCard(const char* iName, const char* iPhone);
	void ShowNameCardInfo();
	int NameCompare(char* iName);
	void ChangePhoneNum(char* iPhone);
protected:
	char name[Name_LEN];
	char phone[PHONE_LEN];

};

