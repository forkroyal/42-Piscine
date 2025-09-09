/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:50:49 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/29 12:25:07 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);
int		startcount(char *str, char *to_find, int *i, int *j);
char	*ft_strstr(char *str, char *to_find);

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

int	startcount(char *str, char *to_find, int *i, int *j)
{
	int	count;
	int	to_find_length;

	count = 0;
	to_find_length = ft_strlen(to_find);
	while (to_find_length > 0)
	{
		if (str[*i] == to_find[*j])
			count++;
		*i += 1;
		*j += 1;
		to_find_length--;
	}
	if (count == ft_strlen(to_find))
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	*ptr_i;
	int	*ptr_j;

	i = 0;
	j = 0;
	ptr_i = &i;
	ptr_j = &j;
	while (str[*ptr_i] != '\0')
	{
		if (str[*ptr_i] == to_find[j])
		{
			if (startcount(str, to_find, ptr_i, ptr_j))
				return (str += (i - j));
		}
		*ptr_i += 1;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}

// int	main(void)
// {
// 	char haystack[] = "aaccc";
// 	char needle[] = "ccc";

// 	printf("strstr:\t%s\n", strstr(haystack, needle));
// 	printf("FT:\t%s\n", ft_strstr(haystack, needle));
// 	return (0);
// }