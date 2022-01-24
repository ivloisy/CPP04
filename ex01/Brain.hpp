/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:08:03 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/24 01:49:36 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:

	protected:
		std::string	ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const &src);
		Brain	&operator=(Brain const &rhs);
		void	getIdeas() const;
};

#endif
