/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023-10-14 16:18:22 by lucasmar          #+#    #+#             */
/*   Updated: 2023-10-14 16:18:22 by lucasmar         ###   ########.fr       */
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
		~Animal(void);
};

#endif
