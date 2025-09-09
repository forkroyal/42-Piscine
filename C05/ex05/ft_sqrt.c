/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:53:51 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/02 18:01:47 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else if (i * i > nb)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_sqrt(16));
// 	return (0);
// }