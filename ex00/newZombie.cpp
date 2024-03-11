/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:28:27 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/11 17:26:51 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name); // heap memory -> "malloc"
	return (newZombie);

}

/*
Zombie* newZombie(std::string name);
It creates a zombie, name it, and return it so you can use it outside of the function
scope.
*/
