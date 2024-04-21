/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:44 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/20 20:30:46 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "------------------ WRONG TESTS ------------------" << std::endl;
	WrongAnimal *a = new WrongAnimal;
	WrongAnimal *b = new WrongCat;
	std::cout << a->getType() << std::endl;
	std::cout << b->getType() << std::endl;
	a->makeSound();
	b->makeSound();
	delete a;
	delete b;
}
