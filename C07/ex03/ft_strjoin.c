/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:14:02 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/06 14:48:16 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
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

int	size_for_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	size_for_malloc;
	int	nullterminator;

	i = 0;
	size_for_malloc = 0;
	nullterminator = 1;
	while (i < size)
	{
		size_for_malloc = size_for_malloc + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	size_for_malloc = size_for_malloc - ft_strlen(sep) + nullterminator;
	return (size_for_malloc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*dest;

	i = -1;
	length = 0;
	if (size <= 0)
	{
		dest = malloc(sizeof(char));
		return (dest);
	}
	length = size_for_malloc(size, strs, sep);
	dest = malloc(sizeof(char) * length);
	while (i++ < length)
		dest[i] = '\0';
	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		i++;
		if (i < size)
			dest = ft_strcat(dest, sep);
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char *hallo[] = {"hallo", "hallo"};
// 	printf("%s\n", ft_strjoin(2, hallo, "x"));
// }