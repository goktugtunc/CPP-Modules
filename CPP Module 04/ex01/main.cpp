/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:44 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 02:43:03 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;
	system("leaks ex01");

	// Array of animals
	Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs and cats
	for (int i = 0; i < 2; i++)
	{
		if (i % 2 == 0)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	std::cout << std::endl;

	// Copy Assignment Operator and Create Copies

	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl << "comparing" << std::endl;
	medor.compareTo(medor_copy_ref);
	fifi.compareTo(fifi_copy_ref);
	std::cout << std::endl;

	// Delete
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	system("leaks ex01");
}
