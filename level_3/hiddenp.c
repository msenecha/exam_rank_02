/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hiddenp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:58:55 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 13:17:29 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	hidenp(char *word, char *str)
{
	int	i = 0;
	int	j = 0;

	while (word[i])
	{
		while (str[j])
		{
			if (word[i] == str[j])
				i++;
			else if (word[i] == '\0')
				return (write(1, "1", 1));
			j++;
		}
		i++;
	}
	return (write(1, "0", 1));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
