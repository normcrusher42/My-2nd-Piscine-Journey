/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:04:18 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/05 17:11:17 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int		i;
	int		len;
	char	chest;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		chest = str[i];
		str[i] = str[len];
		str[len] = chest;
		i++;
		len--;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char str [50] = "no way its not rainboobrain anymore";
// 	printf("%s", ft_strrev(str));
// }