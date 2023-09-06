
# include "Contact.hpp"

	Contact::Contact()
	{
		return;
	}

	Contact::~Contact()
	{
		return;
	}

	bool	Contact::setFirstName(std::string firstName){
			this->_firstName = firstName;
			return (true);
	}

	bool Contact::setLastName(std::string lastName){
		this->_lastName = lastName;
		return (true);
	}

	bool Contact::setNickName(std::string nickName){
		this->_nickName = nickName;
		return (true);
	}

	bool Contact::setPhoneNumber(std::string phoneNumber){
		this->_phoneNumber = phoneNumber;
		return (true);
	}

	bool Contact::setDarkestSecret(std::string darkestSecret){
		this->_darkestSecret = darkestSecret;
		return (true);
	}

	bool Contact::setId(int id){
		this->_id = id;
		return (true);
	}

	std::string Contact::getFirstName(void){
		return(this->_firstName);
	}

	std::string Contact::getLastName(void){
		return(this->_lastName);
	}

	std::string Contact::getNickName(void){
		return(this->_nickName);
	}

	std::string Contact::getPhoneNumber(void){
		return(this->_phoneNumber);
	}

	std::string Contact::getDarkestSecret(void){
		return(this->_darkestSecret);
	}

	int	Contact::getId(void){
		return(this->_id);
	}

	bool	Contact::checkNull(){

		if(this->_id < 0 && this->_id >= 8){
			std::cout << "Valor do id: " << _id << std::endl;
			return (false);
		}
		if(this->_firstName.empty())
			return (false);
		if(this->_lastName.empty())
			return (false);
		if(this->_nickName.empty())
			return (false);
		if(this->_phoneNumber.empty())
			return (false);
		return (true);
	}
