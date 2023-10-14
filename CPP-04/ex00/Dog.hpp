/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:09:03 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/12 16:00:01 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
public:
	Dog(void);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	~Dog(void);

	void makeSound(void) const;
};

#endif
