/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:55:30 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/29 15:16:05 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main() {

	const Dog	*D1 = new Dog();
	const Dog	*D2 = new Dog();
	const Animal	*C = new Cat();
	const Brain	*tmpB;
	const Brain	*tmpA;

	cout << "------------------------" << endl;
	D2->getBrainAdress()->setBrainIdea(42, "salut");
	tmpA = D1->getBrainAdress();
	tmpB = D2->getBrainAdress();
	cout << tmpA << endl << tmpB << endl;

	cout << "------------------------" << endl;
	delete D1;
	delete D2;
	delete C;

	return 0;
}