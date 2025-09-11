/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:22:53 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/11 17:32:46 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);
char				*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter += 1;
		str += 1;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = ft_strlen(src);
	new = malloc(sizeof(char) * i + 1);
	ft_strcpy(new, src);
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	int					i;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
		{
			while (array[i].copy)
				free(array[i--].copy);
			free(array);
			return (NULL);
		}
		i++;
	}
	array[i] = (t_stock_str){0, NULL, NULL};
	return (array);
}

// int main (int argc, char **argv)
// {
//     // struct s_stock_str *array = ft_strs_to_tab(argc, argv);
//     // int i = 1;
//     // printf("%i\n%s\n%s\n", array[i].size, array[i].str, array[i].copy);
//     (void)argc;
//     (void) argv;
    

// }