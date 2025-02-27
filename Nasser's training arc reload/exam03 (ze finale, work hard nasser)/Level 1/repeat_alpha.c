/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:29:18 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/11 15:52:54 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	repeat;
	if (ac == 2)
	{
		while (av[1][i])
		{
			repeat = 1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				repeat += av[1][i] - 'a';
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				repeat += av[1][i] - 'A';
			}
			while (repeat)
			{
				write(1, &av[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
}