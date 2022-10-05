/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:59:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/05 12:22:05 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void ) {

	//test sur les materias
	/* cout << endl << "-----------------MATERIA TEST :---------------" << endl << endl;

	cout << endl << "-----------------ICE CREATION AND ASSIGNATION :---------------" << endl << endl;
	Ice ice1 = Ice();
	Ice ice2 = Ice(ice1);
	Ice ice3 = Ice();
	ice3 = ice1;

	cout << endl << "-----------------ICE DISPLAY :---------------" << endl << endl;
	cout << ice1 << endl;
	cout << ice2 << endl;
	cout << ice3 << endl;
	
	cout << endl << "-----------------CURE CREATION AND ASSIGNATION :---------------" << endl << endl;
	Cure cure1 = Cure();
	Cure cure2 = Cure(cure1);
	Cure cure3 = Cure();
	cure3 = cure1;

	cout << endl << "-----------------CURE DISPLAY :---------------" << endl << endl;
	cout << cure1 << endl;
	cout << cure2 << endl;
	cout << cure3 << endl;

	cout << endl << "-----------------TARGET CREATION :---------------" << endl << endl;
	Character	target = Character("poor victim");

	cout << endl << "-----------------TARGET DISPLAY :---------------" << endl << endl;
	cout << target << endl;

	cout << endl << "-----------------MATERIA USE FUNCTION :---------------" << endl << endl;
	ice1.use(target);
	ice2.use(target);
	ice3.use(target);
	cure1.use(target);
	cure2.use(target);
	cure3.use(target);

	cout << endl << "-----------------MATERIA CLONE FUNCTION :---------------" << endl << endl;
	AMateria* copyice1;
	AMateria* copyice2;
	AMateria* copyice3;
	AMateria* copycure1;
	AMateria* copycure2;
	AMateria* copycure3;

	copyice1 = ice1.clone();
	copyice2 = ice2.clone();
	copyice3 = ice3.clone();
	copycure1 = cure1.clone();
	copycure2 = cure2.clone();
	copycure3 = cure3.clone();

	cout << endl << "-----------------MATERIA CLONE USE FUNCTION :---------------" << endl << endl;
	copyice1->use(target);
	copyice2->use(target);
	copyice3->use(target);
	copycure1->use(target);
	copycure2->use(target);
	copycure3->use(target);

	cout << endl << "-----------------MATERIA CLONE DELETION :---------------" << endl << endl;
	delete copyice1;
	delete copyice2;
	delete copyice3;
	delete copycure1;
	delete copycure2;
	delete copycure3; */

	
	//test sur materia source
	
	cout << endl << "-----------------MATERIA SOURCE TEST :---------------" << endl << endl;

	cout << "-----------------CREATION---------------" << endl;
	cout << "-----------------CREATION MATERIA SOURCE---------------" << endl;
	MateriaSource*	src1 = new MateriaSource();
	MateriaSource*	src3 = new MateriaSource();
	cout << "-----------------CREATION MATERIA---------------" << endl;
	AMateria*		ice = new Ice();
	AMateria*		cure = new Cure();

	cout << "-----------------FUNCTION TEST---------------" << endl;
	src1->learnMateria(ice);
	src1->learnMateria(ice);
	cout << "-----------------TRYING COPY---------------" << endl;
	MateriaSource*	src2 = new MateriaSource(*src1);
	cout << "-----------------FUNCTION TEST---------------" << endl;
	src1->learnMateria(cure);
	cout << "-----------------TRYING ASSIGNMENT---------------" << endl;
	*src3 = *src1;
	cout << "-----------------FUNCTION TEST---------------" << endl;
	src1->learnMateria(cure);
	src1->learnMateria(cure);
	src3->learnMateria(ice);
	cout << "-----------------DISPLAY SOURCE CONTENT---------------" << endl;
	cout << *src1 << endl;
	cout << *src2 << endl;
	cout << *src3 << endl;
	cout << "-----------------CLEAN UP---------------" << endl;
	delete src1;
	delete src2;
	delete src3;
	delete ice;
	delete cure;

	cout << "-----------------DESTRUCTION CALL---------------" << endl;
	
/* 
	AMateria	salut = AMateria();
	AMateria	coucou = AMateria("Ice");
	AMateria	tu = AMateria(coucou);

	salut = coucou;

	cout << "salut : " << salut << endl;
	cout << "tu : " << tu << endl;
	cout << "coucou : " << coucou << endl;
	 */

	/* Ice	salut = Ice();
	Ice	coucou = Ice(salut);
	AMateria*	haha = coucou.clone();
	Character	me = Character();
	Character	usane = Character("usane");
	Character	heu = Character("heu...");

	cout << "-------------------------" << endl;
	Cure	salut2 = Cure();
	Cure	coucou2 = Cure(salut2);
	AMateria*	haha2 = coucou2.clone();
	cout << "-------------------------" << endl;

	cout << "salut : " << salut << endl;
	cout << "coucou : " << coucou << endl;
	cout << "test : " << *haha << endl;
	salut.use(usane);
	cout << "salut2 : " << salut2 << endl;
	cout << "coucou2 : " << coucou2 << endl;
	cout << "test2 : " << *haha2 << endl;
	salut2.use(heu);
	cout << "-------------------------" << endl;
	cout << me.getName() << endl;
	me.equip(&salut);
	me.equip(&salut2);
	me.use(0, usane);
	cout << "-----------heuuuu--------------" << endl;
	me.use(2, usane);
	cout << "-----------heuuuu--------------" << endl;
	me.use(1, usane);
	me.unequip(1);
	me.equip(&coucou);
	me.use(1, usane);



	
	cout << "-------------------------" << endl;

	delete haha;
	delete haha2;
	cout << "-------------------------" << endl; */
	
	return (0);
}