/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 09:56:40 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/21 09:56:44 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototypes
void	ft_print_reverse_alphabet(void);

// function that displays a character passed as a parameter
void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

// // main function that triggers the ft_putchar function
// int main(void){
//     ft_print_reverse_alphabet();
//     return 0;
// }
