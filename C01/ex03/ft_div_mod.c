/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:48:39 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/23 14:54:02 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main(void)
// {
//     int a = 42;
//     int b = 600;

//     int* div = &a;
//     int* mod = &b;

//     ft_div_mod(a, b, div, mod);

//     printf("%i\n", *div);
//     printf("%i\n", *mod);
// }
