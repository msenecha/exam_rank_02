/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:18:26 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 13:38:29 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		i = a;
	else
		i = b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	unsigned int	a = 45;
	unsigned int	b = 18;

	printf("%d\n", lcm(a, b));
	return (0);
}
