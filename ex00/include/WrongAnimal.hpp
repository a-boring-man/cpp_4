/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:25:13 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 15:07:59 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		void	makeSound( void ) const;

		string	getType( void ) const;

	private:

		string	_type;
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & WA );
