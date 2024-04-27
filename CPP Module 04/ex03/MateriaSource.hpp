/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 08:34:46 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 10:48:49 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *(Materias[4]);
		int MateriasIsFull(void);
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource &other);
		MateriaSource &operator=(MateriaSource &other);
		void learnMateria(AMateria *other);
		AMateria* createMateria(std::string const & type);
		~MateriaSource(void);
};

#endif