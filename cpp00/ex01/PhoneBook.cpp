#include "PhoneBook.class.h"
#include "Contact.class.h"
#include <iostream>
#include <string.h>

PhoneBook::PhoneBook(std::string name)
	:PhoneBookName(name),
	currentIndex(0)
	{

	}

void PhoneBook::addContact() 
{
	std::string firstName;
	std::string lastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string darkest;
	std::cout << "Enter first name : ";
	std::cin >> firstName;
	std::cout << "\n";
	std::cout << "Enter last name : ";
	std::cin >> lastName;
	std::cout << "\n";
	std::cout << "Enter Nickname : ";
	std::cin >> Nickname;
	std::cout << "\n";
	std::cout << "Enter Phone Number : ";
	std::cin >> PhoneNumber;
	std::cout << "\n";
	std::cout << "Enter Darkest Secret : ";
	std::cin >> darkest;
	std::cout << "\n";
}
