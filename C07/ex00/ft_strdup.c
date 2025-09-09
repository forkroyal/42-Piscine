/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:10:29 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/04 14:39:51 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

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

// int	main(void)
// {
// 	char *hallo = ft_strdup("hallo");
// 	printf("%p\n", hallo);
// }