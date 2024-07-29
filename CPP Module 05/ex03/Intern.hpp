/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:31:25 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/26 18:32:15 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class Intern
{
	public:
		Intern(void);
		Intern(Intern &other);
		~Intern(void);
		AForm	*makeForm(std::string formType, std::string formName);
		class InvalidFormException : std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
};

#endif