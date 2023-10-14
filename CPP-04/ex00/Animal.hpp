/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:08:51 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/13 20:29:18 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &other);
		virtual ~Animal(void);

		void setType(std::string type);
		std::string getType(void) const;
		virtual void makeSound(void) const;
	protected:
		std::string _type;
};

#endif
