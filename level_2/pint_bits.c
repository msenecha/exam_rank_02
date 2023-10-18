/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pint_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:18:23 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/04 14:51:35 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	div = 128;
	int	num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

int	main(void)
{
	print_bits(2);
	return (0);
}
