/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:05:58 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 19:08:19 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form Created!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "Shrubbery Created!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other): AForm(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecutorGrade())
{
	std::cout << "Shrubbery Created!" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	std::cout << "Shrubbery Created!" << std::endl;
	return (other);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form Deleted!" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecutorGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSignStatus() == false)
		std::cerr << "ShrubberyCreationForm couldn't be executed by " << executor.getName() << " because it wasn't signed!" << std::endl;
	else
	{
		std::ofstream out;

		out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);

		out << "\n"
			<< "                                            ." << "\n"
			<< "                                    .         ;  " << "\n"
			<< "       .              .              ;%     ;;   " << "\n"
			<< "         ,           ,                :;%  %;   " << "\n"
			<< "          :         ;                   :;%;'     .,   " << "\n"
			<< " ,.        %;     %;            ;        %;'    ,;" << "\n"
			<< "   ;       ;%;  %%;        ,     %;    ;%;    ,%'" << "\n"
			<< "    %;       %;%;      ,  ;       %;  ;%;   ,%;' " << "\n"
			<< "     ;%;      %;        ;%;        % ;%;  ,%;'" << "\n"
			<< "      `%;.     ;%;     %;'         `;%%;.%;'" << "\n"
			<< "       `:;%.    ;%%. %@;        %; ;@%;%'" << "\n"
			<< "          `:%;.  :;bd%;          %;@%;'" << "\n"
			<< "            `@%:.  :;%.         ;@@%;'   " << "\n"
			<< "              `@%.  `;@%.      ;@@%;         " << "\n"
			<< "                `@%%. `@%%    ;@@%;        " << "\n"
			<< "                  ;@%. :@%%  %@@%;       " << "\n"
			<< "                    %@bd%%%bd%%:;     " << "\n"
			<< "                      #@%%%%%:;;" << "\n"
			<< "                      %@@%%%::;" << "\n"
			<< "                      %@@@%(o);  . '         " << "\n"
			<< "                      %@@@o%;:(.,'         " << "\n"
			<< "                  `.. %@@@o%::;         " << "\n"
			<< "                     `)@@@o%::;         " << "\n"
			<< "                      %@@(o)::;        " << "\n"
			<< "                     .%@@@@%::;         " << "\n"
			<< "                     ;%@@@@%::;.          " << "\n"
			<< "                    ;%@@@@%%:;;;. " << "\n"
			<< "                ...;%@@@@@%%:;;;;,..   " << std::endl;
			std::cout << executor.getName() << " executed " << this->getName() <<std::endl;
		}
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm &other)
{
	o << "Name: " << other.getName() << std::endl << "Target: " << other.getTarget() << std::endl << "Sign Status: " << other.getSignStatus() << std::endl << "Sign Grade: " << other.getSignGrade() << std::endl << "Execute Grade: " << other.getExecutorGrade() << std::endl;
	return (o);
}
