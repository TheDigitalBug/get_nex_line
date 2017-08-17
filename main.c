/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:34:43 by kkotliar          #+#    #+#             */
/*   Updated: 2017/08/17 11:34:46 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main ()
{
	int fd = open("test", O_RDONLY);
	char *line;
	
	while (get_next_line(fd, &line))
	{
		puts(line);
	}
}
