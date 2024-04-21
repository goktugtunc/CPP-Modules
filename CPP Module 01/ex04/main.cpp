/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:21:10 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/12 01:07:31 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.hpp"

std::string	findstr(std::string line, std::string firststr, std::string secondstr)
{
	std::string	retline;

	while (1)
	{
		size_t	pos = line.find(firststr);
		if (pos != std::string::npos)
		{
			retline += line.substr(0, pos);
			retline += secondstr;
			line = line.substr(pos + firststr.length(), line.length());
		}
		else
		{
			retline += line;
			return (retline);
		}
	}
}

void	copyfile(std::string filename, std::string copiedfilename, std::string firststr, std::string secondstr)
{
	std::ifstream	file(filename);
	if (file.is_open())
	{
		std::ofstream	copiedfile(copiedfilename);
		std::string		line;
		while (getline(file, line))
		{
			size_t	pos = line.find(firststr);
			if (pos != std::string::npos)
			{
				copiedfile << findstr(line, firststr, secondstr) << std::endl;
			}
			else
			{
				copiedfile << line << std::endl;
			}
		}
	}
	else
	{
		std::cout << "Wrong File Name!" << std::endl;
		exit (1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong Argument! Please enter three arguments!" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string firststr = argv[2];
	std::string secondstr = argv[3];
	std::string copiedfile = "copied" + filename;
	copyfile(filename, copiedfile, firststr, secondstr);
	return (0);
}
