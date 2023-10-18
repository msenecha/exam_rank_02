/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:06:00 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 11:57:37 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	len = (end - start) + 1;
	int	*tab;
	int	i;

	i = 0;
	if (end < start)
		return (ft_rrange(end, start));
	tab = malloc(len * sizeof(int));
	if (tab)
	{
		while (i <= len)
		{
			tab[i] = end;
			i++;
			end--;
		}
	}
	return (tab);
}

int	main(void)
{
	int	*i;

	i = ft_rrange(-2, -8);
	printf("%d\n", *i);
	return (0);
}
