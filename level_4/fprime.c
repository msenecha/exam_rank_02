/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:49:41 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 17:20:05 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (i++ <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (i == num)
					break ;
				printf("*");
				num = num / i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
