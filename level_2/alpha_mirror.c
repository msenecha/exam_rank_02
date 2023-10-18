/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:21:28 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 16:47:43 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_mirror(int c, char *ref, char *output)
{
	int	i = 0;

	while (ref[i])
	{
		if (ref[i] == c)
		{
			write(1, &output[i], 1);
			break ;
		}
		i++;
	}
}

void	alpha_mirror(char *str)
{
	int	i = 0;
	char	base1[26] = "abcdefghijklmABCDEFGHIJKLM";
	char	base2[26] = "zyxwvutsrqponZYXWVUTSRQPON";

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			ft_print_mirror(str[i], base1, base2);
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			ft_print_mirror(str[i], base2, base1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
