/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 09:52:09 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/30 11:27:32 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// int	main(int argc, char **argv)
// {
// 	printf("ARGC: %i\n\n", argc);

// 	printf("STRCMP:\t%i\n", strncmp(argv[1], argv[2], 2));
// 	printf("FT:\t%i\n", ft_strncmp(argv[1], argv[2], 2));
// 	return (0);

// 	// printf("%i\n", ft_strcmp("ABZ", "ABC"));
// 	// printf("%i", strcmp("ABZ", "ABC"));
// 	// ft_strcmp("a", "a");
// }