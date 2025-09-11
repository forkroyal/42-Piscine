/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:48:09 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/11 18:28:06 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	wie_viele_stellen_hat_meine_zahl(int number)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		number = number * -1;
		i++;
	}
	while (number > 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int number)
{
	int		stellen;
	char	*itoa;

	stellen = wie_viele_stellen_hat_meine_zahl(number);
	itoa = malloc(sizeof(char) * (stellen + 1));
	if (itoa == NULL)
		return (NULL);
	itoa[stellen--] = '\0';
	if (number == 0)
	{
		itoa[0] = 48;
		return (itoa);
	}
	if (number < 0)
	{
		itoa[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		itoa[stellen] = number % 10 + 48;
		number = number / 10;
		stellen--;
	}
	return (itoa);
}

int	main(void)
{
    printf("%i\n", wie_viele_stellen_hat_meine_zahl(5));
	printf("%s", ft_itoa(5));
}