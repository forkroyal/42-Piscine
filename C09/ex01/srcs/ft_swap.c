/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:56:20 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/25 13:35:44 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	swap_a;

	swap_a = *a;
	*a = *b;
	*b = swap_a;
}

// int	main(void)
// {
// 	int a = 42;
// 	int b = 600;

// 	int *apt = &a;
// 	int *bpt = &b;

// 	printf("%i\n", a);
// 	printf("%i\n", b);

// 	ft_swap(apt, bpt);

// 	printf("%i\n", a);
// 	printf("%i\n", b);
// }