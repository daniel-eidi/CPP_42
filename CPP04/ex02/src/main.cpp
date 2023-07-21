/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:25:49 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/07/19 22:49:37 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Dog.hpp>



int main()
{

///Animal j ;    Gera erro pois classe abstrata não pode ser instanciada, attua apenas e somente como base
const Dog* i = new Dog();
const Cat c;
i->makeSound();
c.makeSound();
delete i;
return 0;
}
