/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:09:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 11:30:24 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() {

	cout << "Dog DEFAULT constructor called" << endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog( const Dog & src ) {

	cout << "Dog DEFAULT constructor called" << endl;
	this->_type = src._type;
	this->_brain = new Brain(*src.getBrainAdress());
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {

	cout << "Dog destructor called" << endl;
	delete this->_brain;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs.getBrainAdress());
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & D )
{
	o << "type = " << D.getType() << "brain locate in : " << D.getBrainAdress();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const {

	cout << "Wuf !" << endl;
	return;
}

Brain * Dog::getBrainAdress( void ) const {

	return(this->_brain);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */