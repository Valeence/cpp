#include <string>
#include <ctime>

class Contact
{
	public:
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
	private:
		std::string c_FirstName;
		std::string c_LastName;
		std::string c_Nickname;
		std::string c_PhoneNumber;
		std::string c_DarkestSecret;
		int index
};