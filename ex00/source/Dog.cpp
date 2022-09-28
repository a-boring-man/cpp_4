/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:09:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 15:14:26 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() {

	cout << "Dog DEFAULT constructor called" << endl;
	this->_type = "Dog";
	return;
}

Dog::Dog( const Dog & src ) {

	cout << "Dog DEFAULT constructor called" << endl;
	this->_type = src._type;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {

	cout << "Dog destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & D )
{
	o << "type = " << D.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const {

	cout << "Wuf !" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */