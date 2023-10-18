/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:52:40 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/04 15:02:54 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev = 0;
	int	i = 8;

	while (i > 0)
	{
		rev = rev * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (rev);
}
