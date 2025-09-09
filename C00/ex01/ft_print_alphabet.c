/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 09:55:52 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/21 09:56:01 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototypes
void	ft_print_alphabet(void);

// function that displays a character passed as a parameter
void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

// main function that triggers the ft_putchar function
// int main(void){
//     ft_print_alphabet();
//     return 0;
// }
