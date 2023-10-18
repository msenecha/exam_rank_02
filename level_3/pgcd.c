/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:02:36 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 15:08:38 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int	i = 1;
	int	res;

	if (a <= 0 || b <= 0)
		return ;
	while (i <= a || i <= b)
	{
		if (a % i == 0 && b % i == 0)
			res = i;
		i++;
	}
	printf("%d", res);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		pgcd(a, b);
	}
	printf("\n");
	return (0);
}
