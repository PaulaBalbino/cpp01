/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:02:44 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/17 21:23:48 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie *zombieHorde = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}
return (zombieHorde);
}
