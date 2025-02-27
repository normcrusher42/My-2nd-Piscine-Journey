/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:49:04 by nanasser          #+#    #+#             */
/*   Updated: 2024/09/11 15:37:26 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbrplus(int num)
{
	if (num > 9)
	{
		putnbrplus(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
}

int	main()
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (num % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (num % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			putnbrplus(num);
		}
		write(1, "\n", 1);
		num++;
	}
}