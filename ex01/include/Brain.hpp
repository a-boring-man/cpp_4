/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:15:41 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/29 09:52:37 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &		operator=( Brain const & rhs );

		string	getBrainIdea( int i ) const;
		void	setBrainIdea( int i, string idea );

	private:

		string	_idea_tab[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & B );
