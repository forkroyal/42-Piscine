/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:12:03 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/30 11:11:28 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

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

// int	main(int argc, char **argv)
// {
// 	printf("ARGC: %i\n\n", argc);

// 	printf("STRCMP:\t%i\n", strcmp(argv[1], argv[2]));
// 	printf("FT:\t%i\n", ft_strcmp(argv[1], argv[2]));
// 	return (0);

// 	//printf("%i\n", ft_strcmp("ABZ", "ABC"));
// 	//printf("%i", strcmp("ABZ", "ABC"));
// 	// ft_strcmp("a", "a");
// }