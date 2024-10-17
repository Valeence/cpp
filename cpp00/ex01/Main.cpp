#include "Contact.class.h"
#include "PhoneBook.class.h"
#include <iostream>
#include <string.h>

int main(void)
{
	PhoneBook PhoneBook("My Awesome Phonebook");
	std::string Command;
	while (1)
	{
		std::cout << "PHONEBOOK\n\nEnter a command:\n\n-ADD:\n\n-SEARCH:\n\n-EXIT:\n";
		std::cin >> Command;

		std::cout << "Command = " << Command << std::endl;
		if (Command == "ADD")
			PhoneBook.addContact();
		else if (Command == "SEARCH")
		{
			std::cout << "searchhhhhh";
		}
		else if (Command == "EXIT")
			break;
		std::cout << std::endl;
	}
	return (0);
}