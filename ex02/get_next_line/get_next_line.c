/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:40:49 by wrolanda          #+#    #+#             */
/*   Updated: 2022/01/18 21:43:13 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(char **line)
{
	int	rd = 0, i = 0;
	char *buffer = malloc(100000);
	*line = buffer;
	while ((rd = read(0, &buffer[i], 1)) > 0 && buffer[i] != '\n')
		i++;
	buffer[i] = '\0';
	return rd;
}