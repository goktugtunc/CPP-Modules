/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:44 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 22:54:28 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	Cat *a = new Cat();
	a->makeSound();
	Dog *c = new Dog();
	c->makeSound();
	// AAnimal *b = new AAnimal();
	a->makeSound();
	delete a;
	delete c;
	system("leaks ex02");
}
