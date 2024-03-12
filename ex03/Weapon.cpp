/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:50:13 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/12 20:35:55 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string initialType)
{
	type = initialType;
}

const std::string& Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	type = newType;
}




