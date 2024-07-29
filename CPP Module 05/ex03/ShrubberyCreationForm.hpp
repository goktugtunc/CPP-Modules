/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:06:01 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 19:02:15 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &other);
		~ShrubberyCreationForm(void);
		void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm &other);

#endif
