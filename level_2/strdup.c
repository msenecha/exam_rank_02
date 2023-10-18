/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:58:40 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 11:33:18 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char 	*new;
	int	i = 0;

	new = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	main(void)
{
	char	str[27] = "Hello, my name is Stringy.";

	printf("original : %s\n", str);
	printf("result : %s\n", ft_strdup(str));
	printf("fonction lib : %s\n", strdup(str));
	return (0);
}
