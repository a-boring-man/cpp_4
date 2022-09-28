/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:44:10 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 14:07:02 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {

	cout << "cat DEFAULT constructor called" << endl;
	this->_type = "cat";
	return;
}

Cat::Cat( const Cat & src ) {

	cout << "cat COPY constructor called" << endl;
	this->_type = src._type;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {

	cout << "cat destructor called" << endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & C )
{
	o << "type = " << C.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const {

	cout << "Miaou !" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */