#include<iostream>
#include <string>  // including <string> because getline is getting error while removing.


namespace Naming{

	void naming() {

		std::string fullName, firstName, lastName;
		std::cout << "Enter full name: \n";
		std::getline(std::cin, fullName);

		size_t spacePosition = fullName.find(' ');

		if (spacePosition != std::string::npos) {

			firstName = fullName.substr(0, spacePosition);
			lastName = fullName.substr(spacePosition + 1);

			std::cout << "Full Name:  " << fullName <<"\n"<<
				         "First Name: " << firstName <<"\n"<<
				         "Last Name:  " << lastName <<std::endl;
		}
		else
			std::cout << " Please type first and last name!"<< std::endl;
	

		/*std::string fullName = "John Doe";
		std::string firstName = fullName.substr(0, 4);
		std::string lastName = fullName.substr(5, 3);

		std::cout << "Full Name: " << fullName << std::endl;
		std::cout << "FirstName: "<< firstName << std::endl;
		std::cout << "LastName:  "<< lastName << std::endl;*/


	}

	
}