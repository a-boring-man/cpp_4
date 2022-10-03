/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:30:52 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 15:45:21 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() {

	cout << "ice DEFAULT constructor called" << endl;
	this->_type = "ice";
	return;
}

Ice::Ice( const Ice & src ) {

	cout << "ice COPY constructor called" << endl;
	this->_type = src._type;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice() {

	cout << "ice destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & I )
{
	o << "Type = " << I.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria*	Ice::clone( void ) const {

	AMateria*	clone = new Ice(*this);
	return(clone);
}

void	Ice::use( const string target ) {

	cout << "Ice: \"* shoot an ice bolt at " << target << " *\"" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */