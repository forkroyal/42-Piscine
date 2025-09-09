/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:12:47 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/04 11:47:55 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// prototypes

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_int_tab(char **tab, int size);

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	int		min_position;
	char	*swap;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		min_position = i;
		while (j < size)
		{
			if (ft_strcmp(tab[min_position], tab[j]) > 0)
				min_position = j;
			j += 1;
		}
		if (min_position != i)
		{
			swap = tab[i];
			tab[i] = tab[min_position];
			tab[min_position] = swap;
		}
		i += 1;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str += 1;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	j;

	ft_sort_int_tab(argv, argc);
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		j++;
	}
}
