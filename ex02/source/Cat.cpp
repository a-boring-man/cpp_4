/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:44:10 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 10:56:14 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {

	cout << "cat DEFAULT constructor called" << endl;
	this->_type = "cat";
	this->_brain = new Brain();
	return;
}

Cat::Cat( const Cat & src ) {

	cout << "cat COPY constructor called" << endl;
	this->_type = src._type;
	this->_brain = new Brain(*src.getBrainAdress());
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {

	cout << "cat destructor called" << endl;
	delete this->_brain;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs ) {

	if ( this != &rhs )
	{
		delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & C ) {

	o << "type = " << C.getType() << "brain locate in : " << C.getBrainAdress();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const {

	cout << "Miaou !" << endl;
	return;
}

Brain * Cat::getBrainAdress( void ) const {

	return(this->_brain);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */