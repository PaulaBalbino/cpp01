/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:28:30 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/11 17:50:04 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie randomZombie(name); // memory: stack
	randomZombie.announce();
}


/*

void randomChump( std::string name );
It creates a zombie, name it, and the zombie announces itself.

*/
