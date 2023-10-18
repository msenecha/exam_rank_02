/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:52:59 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 14:02:41 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	temp;

	while (str[len])
		len++;
	len--;
	while (i < (len + 1) / 2)
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[12] = "Hello World";

	printf("before function : %s\n", str);
	printf("after function : %s\n", ft_strrev(str));
	return (0);
}
