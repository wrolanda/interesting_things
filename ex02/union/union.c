/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:51:19 by wrolanda          #+#    #+#             */
/*   Updated: 2022/01/18 21:34:00 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	char	tab[256] = {0};
	int		i;

	i = 0;
	while (s1[i])
	{
		tab[(int)s1[i]] = 1;
		write (1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (tab[(int)s2[i]] != 1)
		{
			write (1, &s2[i], 1);
			tab[(int)s2[i]] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
