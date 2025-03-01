/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:32:43 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/11 19:41:08 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles1(char *str, char c, int pos)
{
	int	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_doubles2(char *str, char c)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_union(char *str, char *str1)
{
	int	i = 0;
	while (str[i])
	{
		if (check_doubles1(str, str[i], i) == 1)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (check_doubles2(str, str1[i]) == 1)
		{
			if(check_doubles1(str1, str1[i], i) == 1)
			{
				write(1, &str1[i], 1);
			}
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
}