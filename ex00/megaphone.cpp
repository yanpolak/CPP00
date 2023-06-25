/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:56:41 by codespace         #+#    #+#             */
/*   Updated: 2023/06/24 15:04:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (0);
}