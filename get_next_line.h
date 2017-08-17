/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 09:56:57 by kkotliar          #+#    #+#             */
/*   Updated: 2017/01/05 14:22:36 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define FD 63536
# define BUFF_SIZE 32

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		get_next_line(const int fd, char **line);

#endif
