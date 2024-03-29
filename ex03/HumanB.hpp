/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:50:05 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/17 21:33:39 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB {
	private:
		Weapon *instance;
		std::string name;
	public:
		HumanB(std::string name) : instance(NULL), name(name) {};
		void attack();
		void setWeapon(Weapon &newWeapon);
};

#endif

/*
inicialmente a arma eh setada para null e HumanB pode nao ter uma arma
> melhor usar pointer

HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.

*/