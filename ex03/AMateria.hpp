/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:49:58 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/25 15:06:50 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	private:

	protected:
		std::string	_type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &src);
		AMateria			&operator=(AMateria const &rhs);
		std::string const	&getType() const;
};

#endif
