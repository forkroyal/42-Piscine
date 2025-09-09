/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:32:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/27 17:40:27 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (counter == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			counter += 1;
		}
		else if (counter > 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122)
			&& !(str[i] >= 48 && str[i] <= 57))
			counter = 0;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char src_string[] = "HI, HOW are you? 42 WOR2DS fo!!rty-two; fifty+and+one";

// 	printf("%s\n", src_string);
// 	// printf("The char is between the xes: x%cx\n", src_string[1]);

// 	ft_strcapitalize(src_string);

// 	printf("%s\n", src_string);
// }