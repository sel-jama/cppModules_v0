/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:27:55 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/27 00:42:24 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_upper_str(char *str)
{
	int	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = std::toupper(str[i]);
		std::cout << str[i];
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int	i = 0;
		while (av[++i])
			print_upper_str(av[i]);
	}
	std::cout << std::endl;
	return (0);
}
