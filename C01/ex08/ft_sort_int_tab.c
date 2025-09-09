/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:55:30 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/25 13:31:44 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_position;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min_position = i;
		while (j < size)
		{
			if (tab[min_position] > tab[j])
				min_position = j;
			j += 1;
		}
		if (min_position != i)
		{
			swap = tab[i];
			tab[i] = tab[min_position];
			tab[min_position] = swap;
		}
		i += 1;
	}
}

// int	main(void)
// {
// 	int array1[] = {4, 66, 2, 9, 55, 61, 47, 81, 19, 120, 11};
// 	int *stringi = &array1[0];
// 	int lenght = sizeof(array1) / sizeof(int);
// 	// printf("%i\n", stringi[5]);
// 	// printf("%i\n", lenght);
// 	printf("Source:\n");
// 	for (int i = 0; i < lenght; i++)
// 	{
// 		printf("%i\t", stringi[i]);
// 	}
// 	printf("\nSorted:\n");
// 	ft_sort_int_tab(array1, lenght);

// 	for (int i = 0; i < lenght; i++)
// 	{
// 		printf("%i\t", array1[i]);
// 	}
// }