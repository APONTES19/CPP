/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:26 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/12 21:13:39 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{
	private:
		std::string _name;

	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
#endif
