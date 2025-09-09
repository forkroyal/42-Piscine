/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 08:52:14 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/24 13:01:10 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter += 1;
		str += 1;
	}
	return (counter);
}

// int	main(void)
// {
// 	int counter = ft_strlen("siuuuu");
// 	printf("%i", counter);
// 	return (0);
// }