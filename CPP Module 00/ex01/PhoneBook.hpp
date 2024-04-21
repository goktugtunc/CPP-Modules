/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:56:01 by gotunc            #+#    #+#             */
/*   Updated: 2023/12/29 12:45:29 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>

class Phonebook
{
private:
	/* data */
public:
	Phonebook();
	~Phonebook();
	int			totalnumber;
	int			id;
	std::string name;
	std::string surname;
	std::string display_name;
	std::string telno;
	std::string secret;
};

#endif