/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:34:44 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 11:52:05 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	while (*s1)
	{
		j = 0;
		while (s2[j] && *s1 != s2[j])
			j++;
		if (*s1 == s2[j])
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

int	main(void)
{
	char	s[12] = "Hello World";
	char	accept[6] = "Samut";

	printf("ma fonction : %s\n", ft_strpbrk(s, accept));
	printf("fonction lib : %s\n", strpbrk(s, accept));
	return (0);
}
