/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:28:30 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/17 21:20:34 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie randomZombie(name); // memory: stack
	randomZombie.announce();
}


/*
neste caso o zombie eh criado aqui, se anuncia e quando termina
o escopo ele eh deletado (automatico), "uso unico". 
*/
