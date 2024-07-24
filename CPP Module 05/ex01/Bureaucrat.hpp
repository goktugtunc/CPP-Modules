/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:43:04 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 19:49:09 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
		void				setGrade(int level);
		void				getInfo(void);

	public:
		Bureaucrat(void);
		Bureaucrat(std::string nm);
		Bureaucrat(int level);
		Bureaucrat(std::string nm, int level);
		Bureaucrat(Bureaucrat &other);
		Bureaucrat &operator=(Bureaucrat &other);
		~Bureaucrat(void);
		std::string	getName(void);
		int			getGrade(void);
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);
		class GradeTooHighException: std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		class GradeTooLowException: std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &bur);

#endif