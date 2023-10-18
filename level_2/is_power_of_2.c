/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:47:33 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 15:51:47 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n % 2 == 0)
		return (1);
	return (0);
}

int	main(void)
{
	unsigned int	nb;

	nb = 0;
	printf("%d\n", is_power_of_2(nb));
	return (0);
}
