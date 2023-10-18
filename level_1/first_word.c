/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:52:39 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 11:15:20 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_word(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
	{
		if (str[i] > 32)
		{
			write(1, &str[i], 1);
			if (str[i + 1] <= 32)
				break ;
		}
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2 || argv[1][0] != '\0')
		ft_first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
