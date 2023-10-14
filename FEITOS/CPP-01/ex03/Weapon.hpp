/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:34:07 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/18 16:39:59 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string &getType(void);
		void setType(std::string type);
};

#endif
