/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:16:27 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/29 09:52:49 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() {

	cout << "Brain DEFAULT constructor called" << endl;
	return;
}

Brain::Brain( const Brain & src ) {

	for (int i = 0; i < 100; i++)
	{
		this->_idea_tab[i] = src.getBrainIdea(i);
	}
	cout << "Brain COPY constructor called" << endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain() {

	cout << "Brain destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
		{
			this->_idea_tab[i] = rhs.getBrainIdea(i);
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & B )
{
	for (int i = 0; i < 100; i++)
	{
		o << B.getBrainIdea(i) << ",";
	}
	o << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

string	Brain::getBrainIdea( int i ) const {

	if (i < 0 || i > 99)
		return ("out of my range idea");
	return (this->_idea_tab[i]);
}

void	Brain::setBrainIdea( int i, string idea ){

	if (i < 0 || i > 99)
		return;
	this->_idea_tab[i] = idea;
	return;
}

/* ************************************************************************** */