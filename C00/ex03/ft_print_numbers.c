/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 09:57:20 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/21 09:57:24 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototypes
void	ft_print_numbers(void);

// function that displays a character passed as a parameter
void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

// // main function that triggers the ft_putchar function
// int main(void){
//     ft_print_numbers();
//     return 0;
// }
