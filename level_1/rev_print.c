/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:24:13 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 14:29:40 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	i = 0;

	while (str[i + 1] != '\0')
		i++;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] != '\0')
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
