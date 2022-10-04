/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:26:15 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/04 13:26:29 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() {

	
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */