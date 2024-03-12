/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:50:03 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/12 21:05:58 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

void HumanB::attack()
{
	if (this->instance != NULL)
		std::cout << this->name << " attacks with their " << this->instance->getType() << std::endl;
	else
		std::cout << this->name << "does not have a weapon to attack!" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->instance = &newWeapon;
}