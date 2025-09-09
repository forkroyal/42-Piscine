/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:37:33 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/03 10:48:54 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;
	int	mod;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		mod = nb % i;
		if (mod == 0)
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
//     printf("%i", ft_is_prime(27));
// }