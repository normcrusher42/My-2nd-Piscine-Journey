/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:28:59 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/11 19:04:12 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
char	*ft_strrev(char *str)
{
	int	i = 0;
	char	chest;
	int len = ft_strlen(str) - 1;
	while (i < len)
	{
		chest = str[i];
		str[i] = str[len];
		str[len] = chest;
		i++;
		len--;
	}
	return (str);
}

int	main()
{
	char	a[] = "Rainbow Dash";
	printf("%s", ft_strrev(a));
}