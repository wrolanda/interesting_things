/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:51:19 by wrolanda          #+#    #+#             */
/*   Updated: 2022/01/18 21:37:26 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.
*/

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
