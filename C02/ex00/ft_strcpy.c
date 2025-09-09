/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:19:45 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/25 19:23:16 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

// int main (void)
// {
//     char dest_string[] = "Hello";
//     char src_string[] = "byeb";

//     printf("%s\n", src_string);
//     printf("%s\n", dest_string);

//     ft_strcpy(dest_string, src_string);

//     printf("%s\n", src_string);
//     printf("%s", dest_string);

// }
