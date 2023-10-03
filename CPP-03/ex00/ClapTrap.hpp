/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/29 13:29:12 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio>

class ClapTrap{
	public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(ClapTrap const &other);
}
