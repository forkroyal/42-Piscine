/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 09:51:24 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/27 17:43:46 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main (void)
// {
//     char dest_string[] = "Hello";
//     char src_string[] = "byeb";

//     printf("%s\n", src_string);
//     printf("%s\n", dest_string);

//     ft_strncpy(dest_string, src_string, 6);

//     printf("%s\n", src_string);
//     printf("%s\n", dest_string);
//     printf("%c\n", dest_string[0]);
//     printf("%c\n", dest_string[1]);
//     printf("%c\n", dest_string[2]);
//     printf("%c\n", dest_string[3]);
// }
