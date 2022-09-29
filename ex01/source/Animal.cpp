/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:48:28 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 15:04:15 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal") {

	cout << "Animal DEFAULT constructor called" << endl;
	return;
}

Animal::Animal( const Animal & src ) : _type(src._type) {

	cout << "Animal COPY constructor called" << endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {

	cout << "Animal destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & A )
{
	o << "type = " << A.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const {

	cout << "strange Animal sound !" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

string	Animal::getType( void ) const {

	return (this->_type);
}

/* ************************************************************************** */