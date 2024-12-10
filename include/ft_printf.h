/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:08:47 by rsham             #+#    #+#             */
/*   Updated: 2024/12/08 12:09:37 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *c);
void	ft_print_id(int n);
int		ft_print_ptr(unsigned long n);
int		ft_print_hexl(unsigned int n);
int		ft_print_hexu(unsigned int n);
int		ft_print_hex(size_t n);
int		ft_print_uns(unsigned int n);
int		ft_printpercent(void);
int		ft_numlen(int n);
char	*ft_strcpy(char *dest, char *src);

#endif
