/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:25:01 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 15:12:31 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("Wrong Animal"){

	cout << "Wrong Animal DEFAULT constructor called" << endl;
	return;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) : _type(src._type) {

	cout << "Wrong Animal COPY constructor called" << endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {

	cout << "Animal destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & WA )
{
	o << "type = " << WA.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound( void ) const {

	cout << "strange Wrong Animal sound !" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

string	WrongAnimal::getType( void ) const {

	return (this->_type);
}

/* ************************************************************************** */