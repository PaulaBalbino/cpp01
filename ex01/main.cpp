/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:02:35 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/11 18:48:05 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int monsters = 5;

	Zombie *array = zombieHorde(monsters, "Monster");
	if (array == NULL)
		return -1;

	for (int i = 0; i < monsters; i++)
	{
		array[i].announce();
	}

	delete [] array;

	return 0;
}