/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:41:22 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/04 17:31:43 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	sizee;
	int	*result;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	sizee = max - min;
	result = malloc(sizeof(int) * sizee);
	i = 0;
	while (i < sizee && min != max)
	{
		result[i] = min;
		min += 1;
		i++;
	}
	return (result);
}

// int main(void)
// {
//     printf("%i\n", ft_range(600, 606)[3]);
// }