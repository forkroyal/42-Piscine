/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:48:09 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/10 18:37:44 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

//erstelle eine funktion die die dezimalstellen zählt, dividiere die zahl so lange durch 10 bis sie 0 ergibt
// ist die zahl negativ *-1 und i++

int wie_viele_stellen_hat_meine_zahl(int number);




//itoa -- use the upper to malloc a str and find i
//set str[i--] or str[i+1] to \0
//while nbr > 9 set nr % 10 + '0' to str[i]
//i++;
//nbr / 10
//return str