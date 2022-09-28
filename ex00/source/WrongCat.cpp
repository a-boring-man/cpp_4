/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:44:10 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 14:07:02 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() {

	cout << "WrongCat DEFAULT constructor called" << endl;
	this->_type = "WrongCat";
	return;
}

WrongCat::WrongCat( const WrongCat & src ) {

	cout << "WrongCat COPY constructor called" << endl;
	this->_type = src._type;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat() {

	cout << "WrongCat destructor called" << endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & WC )
{
	o << "type = " << WC.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound( void ) const {

	cout << "Miaou !" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */