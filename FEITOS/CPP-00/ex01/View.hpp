/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   View.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:53:56 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/06 16:50:29 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_HPP
# define VIEW_HPP

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <limits>

class View{
	private:
	PhoneBook phoneBook;

	public:
	View();
	~View();
	int	menu(void);

	private:
	int	getInputContact(void);
	std::string	InputNew(std::string menssage, int i);
};

#endif


