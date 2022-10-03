/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:58:25 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 15:43:17 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() : _type("Unknown") {

	cout << "AMateria DEFAULT constructor called" << endl;
	return;
}

AMateria::AMateria( const AMateria & src ) : _type(src._type) {

	cout << "AMateria COPY constructor called" << endl;
	return;
}

AMateria::AMateria( string const & type ) : _type(type) {

	cout << "AMateria TYPE constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria() {

	cout << "AMateria destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & A )
{
	o << "Type = " << A.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use( const string target ) {

	cout << "Unknown: \"* use dark magic on " << target << " *\"" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string	&AMateria::getType ( void ) const {

	return (this->_type);
}

/* ************************************************************************** */