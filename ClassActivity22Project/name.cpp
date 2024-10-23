#include<iostream>

namespace Naming{

	void naming() {
		std::string fullName = "John Doe";
		std::string firstName = fullName.substr(0, 4);
		std::string lastName = fullName.substr(5, 3);

		std::cout << "Full Name: " << fullName << std::endl;
		std::cout << "FirstName: "<< firstName << std::endl;
		std::cout << "LastName:  "<< lastName << std::endl;

	}
}