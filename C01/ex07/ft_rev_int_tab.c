/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 15:20:00 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/24 15:47:54 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap_a;
	int	swap_b;

	i = 0;
	while (i < size / 2)
	{
		swap_a = tab[i];
		swap_b = tab[size - i - 1];
		tab[i] = swap_b;
		tab[size - i - 1] = swap_a;
		i += 1;
	}
}

// int	main(void)
// {
// 	int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
// 	int *stringi = &array1[0];
// 	int lenght = sizeof(array1) / sizeof(int);
// 	// printf("%i\n", stringi[5]);
// 	// printf("%i\n", lenght);
// 	for (int i = 0; i < lenght; i++)
// 	{
// 		printf("Source = %i\n", array1[i]);
// 	}
// 	ft_rev_int_tab(array1, lenght);

// 	for (int i = 0; i < lenght; i++)
// 	{
// 		printf("Swap = %i\n", array1[i]);
// 	}
// }