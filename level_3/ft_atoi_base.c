/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:45:16 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/10 16:23:25 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	ft_valueof(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_isvalid(char c, int base)
{
	char	base_min[17] = "0123456789abcdef";
	char	base_maj[17] = "0123456789ABCDEF";

	while (base--)
	{
		if (c == base_min[base] || c == base_maj[base])
			return (1);
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1;
	int	result = 0;

	while (ft_isblank(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isvalid(*str, str_base))
		result = result * str_base + ft_valueof(*str++);
	return (result * sign);
}
