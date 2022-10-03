/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:58:07 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 15:40:44 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		AMateria( string const & type );
		virtual ~AMateria();

		AMateria &			operator=( AMateria const & rhs );

		string	const &		getType( void ) const;

		virtual AMateria*	clone() const = 0;
		virtual void		use( const string target ); // data type modifier car incoplet;

	protected:

		string	_type;

};

std::ostream &			operator<<( std::ostream & o, AMateria const & A );
