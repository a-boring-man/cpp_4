/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:39:33 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 11:42:09 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <string>
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal &		operator=( AAnimal const & rhs );
		virtual void	makeSound( void ) const = 0;

		virtual Brain * getBrainAdress( void ) const = 0;

		string	getType( void ) const;

	protected:

		string	_type;
};

std::ostream &		operator<<( std::ostream & o, AAnimal const & A );
