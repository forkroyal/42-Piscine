/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:23:39 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/30 14:28:54 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int		i;
	char	j;

	i = 0;
	while (str[i])
	{
		j = str[i];
		write(1, &j, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_putstr("hello");
// }