/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:15:07 by rsham             #+#    #+#             */
/*   Updated: 2024/12/10 19:18:58 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 6
# endif

# include <stdlib.h>
# include <unistd.h>
#include "libft.h"

char	*get_next_line(int fd);
char	*ft_new_tmp(char *tmp);
char	*ft_get_line(char *tmp);
char	*ft_read_tmp(int fd, char *tmp);

#endif