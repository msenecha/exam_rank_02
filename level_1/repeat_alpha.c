/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:17:06 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 14:23:02 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_letter(char c, int i)
{
	while (i >= 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void	ft_repeat_alpha(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			 ft_put_letter(str[i], str[i] - 'a');
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_put_letter(str[i], str[i] - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] != '\0')
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
