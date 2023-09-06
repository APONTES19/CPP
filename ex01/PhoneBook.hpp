/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:53:56 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/06 19:39:53 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdexcept>
# include <stdlib.h>

class PhoneBook{
	private:
	Contact _bDContact[8];
	static	int	_id;
	static	int	_limit;

	public:
	PhoneBook();
	~PhoneBook();
	bool	AddContact(Contact contact);
	bool	Search(void);

	private:
	void	Print10Char(std::string word, int l);
	void	PrintHead();
	void	PrintContacts();
	std::string	FPContact(std::string menssage);
	bool	PrintOneContact(std::string index);
};

#endif


