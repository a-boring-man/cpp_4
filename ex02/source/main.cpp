/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:55:30 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/03 11:43:50 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main() {

	Dog	*D1 = new Dog();
	const Dog	*D2 = new Dog(*D1);
	const AAnimal	*C = new Cat();
	//const AAnimal	A = AAnimal();           // <- uncomment this line
	const Brain	*tmpB;
	const Brain	*tmpA;

	*D1 = *D2;

	cout << "------------------------" << endl;
	D2->getBrainAdress()->setBrainIdea(42, "salut");
	tmpA = D1->getBrainAdress();
	tmpB = D2->getBrainAdress();
	cout << tmpA << endl << tmpB << endl;
	cout << tmpB->getBrainIdea(42) << endl;
	cout << tmpA->getBrainIdea(42) << endl;

	cout << "------------------------" << endl;
	delete D1;
	delete D2;
	delete C;

	return 0;
}