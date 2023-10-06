/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/05 17:25:05 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap{
	public:
	ClapTrap(std::string	name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap	&copy);
	ClapTrap &operator=(ClapTrap const	&other);
	void	setName(std::string name);
	std::string	getName(void) const;
	void	setHitPoint(int	hitPoint);
	int		getHitPoint(void) const;
	void	setEnergyPoint(int	energyPoint);
	int		getEnergyPoint(void) const;
	void	setAttackDamage(int	attackDamage);
	int		getAttackDamage(void) const;
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:
	std::string	_name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;
};

//quando o claptrack ataca ele faz seu alvo perder dano de ataque
//quando se repara recupera amount pontos de vida
//atacar e repara custam 1 ponto de enegia cada
//se não tiver mais ponte de vida e ou energia não pode fazer mais nada


