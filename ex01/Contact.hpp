/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:53:56 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/06 16:28:05 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_id;

	public:
	Contact();
	~Contact();
	bool	setFirstName(std::string firstName);
	bool	setLastName(std::string lastName);
	bool	setNickName(std::string nickName);
	bool	setPhoneNumber(std::string phoneNumber);
	bool	setDarkestSecret(std::string darkestSecret);
	bool	setId(int id);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	int	getId(void);
	bool	checkNull(void);
};

#endif
