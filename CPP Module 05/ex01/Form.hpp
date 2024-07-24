/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:24:00 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 20:10:19 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			executeGrade;
	public:
		Form(void);
		Form(std::string exName, int exSignGrade, int exExecutorGrade);
		~Form(void);
		Form(Form &other);
		std::string	getName(void);
		int			getSignGrade(void);
		int			getExecutorGrade(void);
		bool		getSignStatus(void);
		void		beSigned(Bureaucrat &bur);
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

std::ostream &operator<<(std::ostream &o, Form &form);

#endif