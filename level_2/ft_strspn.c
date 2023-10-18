/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:03:34 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 14:24:22 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	int	j = 0;

	while (*s)
	{
		if (*s == accept[j])
			i++;
		else
			break ;
		j++;
		s++;
	}
	return (i);
}

int	main(void)
{
	char	s[12] = "Hello World";
	char	accept[14] = "Hello le monde";

	printf("my function : %lu\n", ft_strspn(s, accept));
	printf("lib function : %lu\n", strspn(s, accept));
	return (0);
}
