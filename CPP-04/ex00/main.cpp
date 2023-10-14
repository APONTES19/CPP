/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:56:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/14 11:29:20 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	pdf();
int	main(){

	std::cout << "\n-------------------Test PDF------------------" << std::endl;
	pdf();

	std::cout << "\n-------------------Test Animal--------------" << std::endl;{
		std::cout << "\n-> Construtor" << std::endl;
		Animal	a;
		std::cout << "-> Animal a.getType() = " << a.getType() << std::endl;
		std::cout << "\n-> Construtor Copy b(a)" << std::endl;
		Animal	b(a);
		std::cout << "-> Animal b.getType() = " << b.getType() << std::endl;
		std::cout << "\n-> Operador = Called Animal c = a" << std::endl;
		Animal	c;
		c = a;
		std::cout << "\n-> SetType Animal´s" << std::endl;
		a.setType("Tipo_Animal_A");
		b.setType("Tipo_Animal_B");
		c.setType("Tipo_Animal_C");
		std::cout << "-> Animal a.getType() = " << a.getType() << std::endl;
		std::cout << "-> Animal b.getType() = " << b.getType() << std::endl;
		std::cout << "-> Animal c.getType() = " << c.getType() << std::endl;
		std::cout << "\n-> MakeSound Animal´\n\n\n" << std::endl;
		a.makeSound();
		b.makeSound();
		c.makeSound();
	}

	std::cout << "\n-------------------Test Cat-----------------" << std::endl;{
		std::cout << "\n-> Construtor Cat" << std::endl;
		Cat	a;
		std::cout << "-> Cat a.getType() = " << a.getType() << std::endl;
		std::cout << "\n-> Construtor Copy b(a)" << std::endl;
		Cat	b(a);
		std::cout << "-> Cat b.getType() = " << b.getType() << std::endl;
		std::cout << "\n-> Operador = Called Cat c = a" << std::endl;
		Cat	c;
		c = a;
		std::cout << "-> Cat a.getType() = " << a.getType() << std::endl;
		std::cout << "-> Cat b.getType() = " << b.getType() << std::endl;
		std::cout << "-> Cat c.getType() = " << c.getType() << std::endl;
		std::cout << "\n-> MakeSound Cat´s" << std::endl;
		a.makeSound();
		b.makeSound();
		c.makeSound();
	}

	std::cout << "\n-------------------Test Dog-----------------" << std::endl;{
		std::cout << "\n-> Construtor Dog" << std::endl;
		Dog	a;
		std::cout << "-> Dog a.getType() = " << a.getType() << std::endl;
		std::cout << "\n-> Construtor Copy b(a)" << std::endl;
		Dog	b(a);
		std::cout << "-> Dog b.getType() = " << b.getType() << std::endl;
		std::cout << "\n-> Operador = Called Dog c = a" << std::endl;
		Dog	c;
		c = a;
		std::cout << "-> Dog a.getType() = " << a.getType() << std::endl;
		std::cout << "-> Dog b.getType() = " << b.getType() << std::endl;
		std::cout << "-> Dog c.getType() = " << c.getType() << std::endl;
		std::cout << "\n-> MakeSound Dog´s" << std::endl;
		a.makeSound();
		b.makeSound();
		c.makeSound();
	}

	std::cout << "\n------------Test Wrong Animal---------------" << std::endl;{
		std::cout << "\n-> Construtor Wrong Animal" << std::endl;
		WrongAnimal	a;
		std::cout << "-> Wrong Animal a.getType() = " << a.getType() << std::endl;
		std::cout << "\n-> Construtor Copy b(a)" << std::endl;
		WrongAnimal	b(a);
		std::cout << "-> Wrong Animal b.getType() = " << b.getType() << std::endl;
		std::cout << "\n-> Operador = Called Wrong Animal c = a" << std::endl;
		WrongAnimal	c;
		c = a;
		std::cout << "-> Wrong Animal a.getType() = " << a.getType() << std::endl;
		std::cout << "-> Wrong Animal b.getType() = " << b.getType() << std::endl;
		std::cout << "-> Wrong Animal c.getType() = " << c.getType() << std::endl;
		std::cout << "\n-> MakeSound Wrong Animal´s -Virtual" << std::endl;
		a.makeSound();
		b.makeSound();
		c.makeSound();
	}

	std::cout << "\n-------------Test Wrong Cat------------------" << std::endl;{
		std::cout << "\n-> Construtor Wrong Cat *without booting" << std::endl;
		WrongCat	a;
		std::cout << "-> Wrong Cat a.getType() = " << a.getType() << std::endl;
		std::cout << "\n-> Construtor Copy b(a)" << std::endl;
		WrongCat	b(a);
		std::cout << "-> Wrong Cat b.getType() = " << b.getType() << std::endl;
		std::cout << "\n-> Operador = Called Wrong Cat c = a" << std::endl;
		WrongCat	c;
		c = a;
		std::cout << "-> Wrong Cat a.getType() = " << a.getType() << std::endl;
		std::cout << "-> Wrong Cat b.getType() = " << b.getType() << std::endl;
		std::cout << "-> Wrong Cat c.getType() = " << c.getType() << std::endl;
		std::cout << "\n-> MakeSound Wrong Cat´s" << std::endl;
		a.makeSound();
		b.makeSound();
		c.makeSound();
	}

	std::cout << "\n------------Test Wrong Cat------------------" << std::endl;{
		std::cout << "\n-> Construtor Wrong Cat *with booting" << std::endl;
		WrongCat	*a = new WrongCat();
		std::cout << "-> Wrong Cat a.getType() = " << a->getType() << std::endl;
		std::cout << "\n-> Construtor Copy b(a)" << std::endl;
		std::cout << "\n-> Operador = Called Wrong Cat c = a" << std::endl;
		WrongAnimal	*c = new WrongCat();
		c = a;
		std::cout << "-> Wrong Cat a.getType() = " << a->getType() << std::endl;
		std::cout << "-> Wrong Cat c.getType() = " << c->getType() << std::endl;
		std::cout << "\n-> MakeSound Wrong Cat´s" << std::endl;
		a->makeSound();
		c->makeSound();
		delete a;
	}

	return 0;
}

void	pdf(){
	const Animal *meta = new Animal();
	const Animal *j = new Dog() ;
	const Animal *i = new Cat() ;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}
