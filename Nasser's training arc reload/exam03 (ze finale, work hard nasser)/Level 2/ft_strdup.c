/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:14:11 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/11 18:28:14 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	int	i = 0;
	char	*chest;
	int len = ft_strlen(str) + 1;

	chest = malloc(len * sizeof(char));
	if (!chest)
	{
		return (0);
	}
	if (str[i])
	{
		ft_strcpy(chest, str);
	}
	return (chest);
}

int	main()
{
	char	sauce [] = "ola bastard";
	char	*chest;
	chest = ft_strdup(sauce);
	printf("%s", chest);
}