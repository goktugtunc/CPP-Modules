/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 01:07:02 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/04 20:08:59 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	addphonebook(Phonebook *book)
{
	int	membernumber;

	membernumber = (book->totalnumber % 8);
	while (1)
	{
		std::cout << "Please enter the name you want to save" << std::endl;
		std::getline(std::cin, book[membernumber].name);
		if (book[membernumber].name.empty() == 0)
			break ;
	}
	while (1)
	{
		std::cout << "Please enter the surname you want to save" << std::endl;
		std::getline(std::cin, book[membernumber].surname);
		if (book[membernumber].surname.empty() == 0)
			break ;
	}
	while (1)
	{
		std::cout << "Please enter the nickname you want to save" << std::endl;
		std::getline(std::cin, book[membernumber].display_name);
		if (book[membernumber].display_name.empty() == 0)
			break ;
	}
	while (1)
	{
		std::cout << "Please enter the phone number you want to save" << std::endl;
		std::getline(std::cin, book[membernumber].telno);
		int	j = 0;
		if (book[membernumber].telno.empty() == 0)
		{
			while (book[membernumber].telno[j])
			{
				if (book[membernumber].telno[j] == '\0')
				{
					break ;
				}
				if (isdigit(book[membernumber].telno[j]) == 0)
					break ;
				j++;
			}
			if (book[membernumber].telno[j] == '\0')
				break ;
			else
				std::cout << "The number you entered is incorrect. Please enter a correct number." << std::endl;
		}
		else
			std::cout << "The number you entered is incorrect. Please enter a correct number." << std::endl;
	}
	std::cout << "Please enter the darkest secret of the person you are recording" << std::endl;
	std::getline(std::cin, book[membernumber].secret);
	book[membernumber].id = membernumber + 1;
	book->totalnumber++;
	return ;
}

void	tablostringyazdir(std::string str)
{
	if (str.length() > 10)
	{
		for (int temp = 0; temp < 9; temp++)
		{
			std::cout << str[temp];
		}
		std::cout << ".|";
	}
	else
	{
		for (int temp = 10; temp - str.length() != 0; temp--)
		{
			std::cout << " ";
		}
		for (int temp = 0; temp < int(str.length()); temp++)
		{
			std::cout << str[temp];
		}
		std::cout << "|";
	}
}

void	kisibilgiyazdir(Phonebook book)
{
	std::cout << "Name: " << book.name << std::endl;
	std::cout << "Surname: " << book.surname << std::endl;
	std::cout << "Display Name: " << book.display_name << std::endl;
	std::cout << "Telephone Number: " << book.telno << std::endl;
	std::cout << "Darkest Secret: " << book.secret << std::endl;
}

void	searchphonebook(Phonebook *book)
{
	int	i = 0;
	int	toplam;
	std::string input;
	if (book->totalnumber > 8)
		toplam = 8;
	else
		toplam = book->totalnumber;
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|    ID    |   NAME   |  SURNAME |  DISPLAY |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < toplam)
	{
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << "|";
		std::cout << "         " << book[i].id << "|";
		tablostringyazdir(book[i].name);
		tablostringyazdir(book[i].surname);
		tablostringyazdir(book[i].display_name);
		std::cout << std::endl;
		std::cout << "|__________|__________|__________|__________|" << std::endl;
		i++;
	}
	while (1)
	{
		i = 0;
		std::cout << "Please enter a index (or MAINMENU)" << std::endl;
		std::getline(std::cin, input);
		if (input == "MAINMENU")
			return ;
		while (input[i])
		{
			if (!isdigit(input[i]))
				break ;
			i++;
		}
		if (i == int(input.length()))
		{
			if (int(input.length()) == 1 && input[0] > '0' && input[0] < '9')
			{
				i = input[0] - '1';
				if (book->totalnumber > i)
				{
					kisibilgiyazdir(book[i]);
					return ;
				}
				else
					std::cout << "No person found in the entered index!" << std::endl;
			}
			else
				std::cout << "Invalid index!" << std::endl;
		}
		else
		{
			std::cout << "Selection index not a number!" << std::endl;
		}
	}
}

int main()
{
	Phonebook	book[8];
	std::string secim;
	std::cout << "Welcome to the Phonebook app!" << std::endl;
	while (1)
	{
		std::cout << "Please make a choice (ADD / SEARCH / EXIT)" << std::endl;
		std::getline(std::cin, secim);
		if (secim == "ADD")
			addphonebook(book);
		else if (secim == "SEARCH")
			searchphonebook(book);
		else if (secim == "EXIT")
		{
			std::cout << "Exiting!" << std::endl;
			break ;
		}
		else
			std::cout << "Your selection is wrong. Please try again!" << std::endl;
	}
}
