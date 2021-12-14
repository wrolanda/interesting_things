/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda < wrolanda@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:59:24 by wrolanda          #+#    #+#             */
/*   Updated: 2021/12/14 12:19:37 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_miniitoa(int i)
{
	char	f;

	if ((i / 10) != 0)
	{
		ft_miniitoa(i / 10);
	}
	f = (i % 10) + '0';
	write(1, &f, 1);
}

void	ft_fizzbuzz(void)
{
	int		i;
	char	*str;

	i = 0;
	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write(1, "fizz", 5);
		else if (i % 5 == 0)
			write(1, "buzz", 5);
		else
		{
			ft_miniitoa(i);
			write(1, &str, 2);
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	ft_fizzbuzz();
}
