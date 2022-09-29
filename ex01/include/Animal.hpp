/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:48:02 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/29 13:21:06 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );
		virtual void	makeSound( void ) const;

		virtual Brain * getBrainAdress( void ) const = 0;

		string	getType( void ) const;

	protected:

		string	_type;
};

std::ostream &		operator<<( std::ostream & o, Animal const & A );
