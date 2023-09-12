/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:19:38 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/11 21:37:56 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

	int PhoneBook::_id = 0;
	int PhoneBook::_limit = 0;

	PhoneBook::PhoneBook(){
		return;
	}

	PhoneBook::~PhoneBook(){
		return;
	}

	bool	PhoneBook::AddContact(Contact contact){
		if(_id == 8){
			std::cout
			<< "\n	- 🟡 we already have 8 contacts!\n"
			<< "	- limit exceded oldest record will be replaced ok!"
			<< std::endl;
			_id = 0;
			_limit = 1;
		}
		contact.setId(_id);
		if(contact.checkNull()){
			this->_bDContact[_id] = contact;
			std::cout << "\n	- Ok! New contact ADD!" << std::endl;
			std::cout << "	- id: ["
				<< _id << "] " << _bDContact[_id].getFirstName() << "👌"
				<< std::endl;
			_id++;
		}
		else{
			std::cout
			<< "\n	- :( Error when saving! Try Again."
			<< std::endl;
			return(false);
		}
		return(true);
	}

	bool	PhoneBook::Search(void){
		std::string input;

		if (_id > 0 || _limit == 1){
			PrintHead();
			PrintContacts();
			input = FPContact("\n	- Give me an index to search: ");
			if (input == "EXIT"){
				return(false);
			}
			else{
				PrintOneContact(input);
			}
			return(true);
		}
		else{
			std::cout << "	- 🔴 :( Sorry! no contacts yet!" << std::endl;
			return(false);
		}
	}

	void	PhoneBook::Print10Char(std::string word, int l){
		int	i;
		int	j;
		int	x;

		i = 0;
		x = 0;
		j = word.length();
		if (j == 10)
			x = 1;
		while(i <= 9){
			while(j > 0 && i<= 9){
				if(i == 9 && x == 0){
					std::cout << ".";
					break;
				}
				std::cout << word[i];
				j--;
				i++;
			}
			if(j == 0 && i <= 9)
				std::cout << " ";
			i++;
		}
		if (l == 1){
			std::cout << "|";
		}
		else
			std::cout << std::endl;
	}

	void	PhoneBook::PrintHead(){
		Print10Char("Index", 1);
		Print10Char("First name", 1);
		Print10Char("last name", 1);
		Print10Char("nick Name", 0);
	}

	void	PhoneBook::PrintContacts(){
		int i;
		int j;

		j = _id;
		if (_limit == 1){
			j = 8;
		}
		i = 0;
		while(i < j){
			std::cout << _bDContact[i].getId() << "         |";
			Print10Char(_bDContact[i].getFirstName(), 1);
			Print10Char(_bDContact[i].getLastName(), 1);
			Print10Char(_bDContact[i].getNickName(), 0);
			i++;
		}
	}

	std::string	PhoneBook::FPContact(std::string menssage){
		std::string input;
		do{
			std::cout << menssage;
			std::cin.ignore();
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

	bool	PhoneBook::PrintOneContact(std::string index){
		int i;

		for (size_t j = 0; j < index.length(); j++){
			if (!std::isdigit(index[j])){
				std::cout << "	- 🔴 Not a number try again!" << std::endl;
				return(false);
			}
		}
		i = atoi(index.c_str());
		if ((i <= 7 && i <= (_id - 1)) || (i <= 7 && _limit == 1)){
			std::cout << "\n	Index: "
				<< _bDContact[i].getId() << std::endl;
			std::cout << "	First Name: "
				<< _bDContact[i].getFirstName() << std::endl;
			std::cout << "	Last Name: "
				<< _bDContact[i].getLastName() << std::endl;
			std::cout << "	Nick Name: "
				<< _bDContact[i].getNickName() << std::endl;
			std::cout << "	Phone Name: "
				<< _bDContact[i].getPhoneNumber() << std::endl;
			std::cout << "	Darkest Secret: "
				<< _bDContact[i].getDarkestSecret() << std::endl;
		}
		else{
			std::cout << "	- This index does not exist!" << std::endl;
		}
		return(true);
	}
