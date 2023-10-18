/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:16:04 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/04 13:17:47 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i = 0;
	int	res;

	res = tab[i];
	if (len == 0)
		return (0);
	while (i < (int)len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

int	main(void)
{
	int		tab[0] = {};
	unsigned int	len = 5;

	printf("%u\n", max(tab, len));
	return (0);
}
