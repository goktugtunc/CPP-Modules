/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:24:00 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 20:20:09 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		const std::string	target;
		bool				isSigned;
		const int			signGrade;
		const int			executeGrade;
	protected:
		AForm(void);
	public:
		AForm(std::string exName, std::string targ, int exSignGrade, int exExecutorGrade);
		virtual ~AForm(void);
		AForm(AForm &other);
		std::string		getName(void) const;
		int				getSignGrade(void) const;
		int				getExecutorGrade(void) const;
		bool			getSignStatus(void) const;
		std::string		getTarget(void) const;
		void			beSigned(Bureaucrat &bur);
		virtual void	execute(Bureaucrat const &executor) const = 0;
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

std::ostream &operator<<(std::ostream &o, AForm *form);

#endif