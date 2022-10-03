/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:22:19 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 17:13:18 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:

		Character();
		Character( Character const & src );
		Character( string name );
		~Character();

		Character &		operator=( Character const & rhs );

		string const & getName( void ) const;
		void 			equip(AMateria* m);

	private:

		string		_name;
		AMateria*	_inventory[4];
};

std::ostream &			operator<<( std::ostream & o, Character const & C );
