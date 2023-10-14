# include "View.hpp"

	View::View(){
		return;
	}

	View::~View(){

	}

	int View::menu(void){
		std::string input;

		std::cout << "\n	🟢 Hello type it one opction\n\n"
			"	-> \"ADD\" (add new contact)\n"
			"	-> \"SEARCH\" (Find one contact)\n"
			"	-> \"EXIT\"!\n\n"
			"	- What's your chose? #_# : ";

		std::cin >> input;

		if (input == "ADD"){
			std::cout << "\n	- Ok! Add new contact!\n" << std::endl;
			getInputContact();
		}
		else if(input == "SEARCH"){
			std::cout << "\n	- Ok! find one contact!\n" << std::endl;
			phoneBook.Search();
			menu();
		}
		else if(input == "EXIT"){
			std::cout << "\n	👋 - Bye! see you tomorrow! *_*\n" << std::endl;
		}
		else{
			std::cout <<
				"\n	- 🔴 :( Try again! accept \"ADD\";\"SEARCH\" and \"EXIT\"!\n"
				<< std::endl;
			menu();
		}

		return (0);
	}

	int	View::getInputContact(){
		Contact contact;
		std::string input;

		if ((input = InputNew("		- First Name: ", 1)) == "EXIT")
			return (0);
		else if (!contact.setFirstName(input)){
			std::cout << "	- 🔴 :( Error, try again!\n";
			menu();
			return (0);
		}
		if ((input = InputNew("		- Last Name: ", 2)) == "EXIT")
			return (0);
		else if (!contact.setLastName(input)){
			std::cout << "	- 🔴 :( Error, try again!\n";
			menu();
			return (0);
		}
		if ((input = InputNew("		- Nickname: ", 3)) == "EXIT")
			return (0);
		else if (!contact.setNickName(input)){
			std::cout << "	- 🔴 :( Error, try again!\n";
			menu();
			return (0);
		}
		if ((input = InputNew("		- Phone Number: ", 4)) == "EXIT")
			return (0);
		else if (!contact.setPhoneNumber(input)){
			std::cout << "	- 🔴 :( Error, try again!\n";
			menu();
			return (0);
		}
		if ((input = InputNew("		- Darkest Secret: ", 5)) == "EXIT")
			return (0);
		else if (!contact.setDarkestSecret(input)){
			std::cout << "	- 🔴 :( Error, try again!\n";
			menu();
			return (0);
		}
		phoneBook.AddContact(contact);
		menu();
		return (0);
	}

	std::string	View::InputNew(std::string menssage, int i){
		std::string input;
		input = "";
		do{
			std::cout << menssage;
			if (i < 2){
				std::cin.ignore();
			}
			std::getline(std::cin, input);
			if (input == "EXIT"){
				std::cout << "👋 :( ok Bye Bye!)" << std::endl;
			}
			else if (input.empty()){
				std::cout
					<< "	- 🔴 :( Error empty try again or \"EXIT\"!"
					<< std::endl;
			}
		}
		while(input.empty());
		return (input);
	}
