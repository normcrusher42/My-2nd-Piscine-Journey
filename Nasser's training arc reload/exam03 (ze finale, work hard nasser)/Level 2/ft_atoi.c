/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:52:23 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/11 17:02:43 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign *= -1;
	}
	i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

// int	main()
// {
// 	printf("%d", ft_atoi("-42b41"));
// }