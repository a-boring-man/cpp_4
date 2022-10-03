/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:38:00 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 17:07:28 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name("unamed") {

	cout << "DEFAULT character constructor called" << endl;
	return;
}

Character::Character( const Character & src ) : _name(src.getName()) {

	cout << "COPY character constructor called" << endl;
	return;
}

Character::Character( const string name ) : _name(name) {

	cout << "NAMED character constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {

	cout << "character destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & C )
{
	o << "Name = " << C.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip( AMateria* m ) {

	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string&	Character::getName( void ) const {

	return (this->_name);
}

/* ************************************************************************** */