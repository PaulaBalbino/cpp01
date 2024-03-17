/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:28:27 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/17 21:20:44 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name); // heap memory -> "malloc"
	return (newZombie);

}

/*
Precisa ser alocado no heap (usando new) pois sera utilizado em outra
funcao fora do escopo, sera necessario utilizar por mais "tempo",
eh o retorno da funcao
*/
