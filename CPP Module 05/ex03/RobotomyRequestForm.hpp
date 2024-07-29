/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:07:10 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 19:02:33 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(RobotomyRequestForm &other);
		~RobotomyRequestForm(void);
		void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &other);

#endif