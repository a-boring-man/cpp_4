/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:39:36 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 11:41:52 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : _type("AAnimal") {

	cout << "AAnimal DEFAULT constructor called" << endl;
	return;
}

AAnimal::AAnimal( const AAnimal & src ) : _type(src._type) {

	cout << "AAnimal COPY constructor called" << endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal() {

	cout << "AAnimal destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & A )
{
	o << "type = " << A.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound( void ) const {

	cout << "strange AAnimal sound !" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

string	AAnimal::getType( void ) const {

	return (this->_type);
}

/* ************************************************************************** */