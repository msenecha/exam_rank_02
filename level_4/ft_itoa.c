/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:23:01 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 17:37:16 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nb)
{
	int	n = nb;
	int	len = 0;
	char	*res;

	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	res = malloc(len + 1 * sizeof(char));
	res[len] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (nb)
	{
		res[--len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	return (0);
}
