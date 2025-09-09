/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:54:42 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/22 11:33:20 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// function prototypes
void	ft_ft(int *nbr);

// function that displays a character passed as a parameter
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// main function that triggers the ft_putchar function
// int	main(void)
// {
// 	int	b;
// 	int	*b_ptr;

// 	b = 8;
// 	b_ptr = &b;
// 	ft_ft(b_ptr);
// 	printf("%i", b);
// 	//printf("%i", *b_ptr);
// 	return (0);
// }
