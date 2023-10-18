/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:08:43 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 10:56:57 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j;
	while (s[i])
	{
		j = 0;
		while (reject[j] && s[i] != reject[j])
			j++;
		if (reject[j] == s[i])
			break ;
		i++;
	}
	return (i);
}

int	main(void)
{
	char	s[12] = "Hello World";
	char	reject[6] = "World";

	printf("%ld\n", ft_strcspn(s, reject));
	printf("%ld\n", strcspn(s, reject));
	return (0);
}
