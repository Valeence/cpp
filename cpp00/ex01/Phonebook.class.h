#pragma once
#include "Contact.class.h"

class PhoneBook
{

public:
	Contact contact[8];
	int currentIndex;
	PhoneBook(std::string name);
	void addContact();
private:
	std::string PhoneBookName;
};