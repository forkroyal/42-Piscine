/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:08:38 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/04 17:45:20 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sizee;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	sizee = max - min;
	*range = malloc(sizeof(int) * sizee);
	i = 0;
	while (i < sizee && min != max)
	{
		range[0][i] = min;
		min += 1;
		i++;
	}
	return (sizee);
}

// int	main(void)
// {
// 	int *result;
// 	int length;
// 	int i;

// 	length = ft_ultimate_range(&result, 1, 5);

// 	// printf("%i\n", length);

// 	i = 0;
// 	while (i < length + 1)
// 	{
// 		printf("%i\n", result[i]);
// 		i++;
// 	}

// 	// printf("%i\n", ft_ultimate_range(600, 606)[6]);
// }