/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:38:36 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/27 17:30:17 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		Bureaucrat();
		void GradeTooHighException();
		void GradeTooLowException();
	public:
		Bureaucrat(std::string Name, int level);
		Bureaucrat(Bureaucrat &other);
		std::string getName();
		int getGrade();
		Bureaucrat &operator=(Bureaucrat &other);
		void increaseGrade();
		void decreaseGrade();
		~Bureaucrat();
};

#endif