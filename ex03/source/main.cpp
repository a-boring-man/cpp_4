/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:59:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 15:38:22 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

int	main( void ) {
/* 
	AMateria	salut = AMateria();
	AMateria	coucou = AMateria("Ice");
	AMateria	tu = AMateria(coucou);

	salut = coucou;

	cout << "salut : " << salut << endl;
	cout << "tu : " << tu << endl;
	cout << "coucou : " << coucou << endl;
	 */

	Ice	salut = Ice();
	Ice	coucou = Ice(salut);
	AMateria*	haha = coucou.clone();

	cout << "-------------------------" << endl;
	Cure	salut2 = Cure();
	Cure	coucou2 = Cure(salut2);
	AMateria*	haha2 = coucou2.clone();
	cout << "-------------------------" << endl;

	cout << "salut : " << salut << endl;
	cout << "coucou : " << coucou << endl;
	cout << "test : " << *haha << endl;
	cout << "salut2 : " << salut2 << endl;
	cout << "coucou2 : " << coucou2 << endl;
	cout << "test2 : " << *haha2 << endl;

	delete haha;
	delete haha2;
	cout << "-------------------------" << endl;
	
	return (0);
}