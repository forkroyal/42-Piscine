/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 09:52:38 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/21 09:52:48 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototypes
void	ft_putchar(char c);

// function that displays a character passed as a parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// main function that triggers the ft_putchar function
//int	main(void)
//{
//	ft_putchar('Z');
//	return (0);
//}
