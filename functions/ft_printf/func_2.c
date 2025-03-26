/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:02:10 by rsham             #+#    #+#             */
/*   Updated: 2025/01/21 17:56:25 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	char *hex_digits;
	int count;

	count = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else if (format == 'X')
		hex_digits = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		count += ft_print_hex(n / 16, format);
	count += write(1, &hex_digits[n % 16], 1);
	return (count);
}

int	ft_print_hex_ptr(size_t n)
{
	int count = 0;
	char	hex_digits[] = "0123456789abcdef";
	if (n >= 16)
		count += ft_print_hex_ptr(n / 16);
	count += write(1, &hex_digits[n % 16], 1);
	return (count);
}

int	ft_print_ptr(unsigned long n)
{
	int	count;

	count = 0;
	if (!n)
		return (ft_print_str("(nil)"));
	ft_print_char('0');
	ft_print_char('x');
	count += ft_print_hex_ptr(n);
	return (count + 2);
}
