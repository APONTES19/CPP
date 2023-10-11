/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/11 19:43:58 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	public:
	ClapTrap(void);
	ClapTrap(std::string	name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap	&copy);
	ClapTrap &operator=(ClapTrap const	&other);

	void	setName(std::string name);
	std::string	getName(void) const;
	void	setHitPoints(int	hitPoints);
	int		getHitPoints(void) const;
	void	setEnergyPoints(int	energyPoints);
	int		getEnergyPoints(void) const;
	void	setAttackDamage(int	attackDamage);
	int		getAttackDamage(void) const;

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	statusClapTrap();

	protected:
	int	checkClapTrap(void);

	protected:
	std::string	_name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;
};

#endif
