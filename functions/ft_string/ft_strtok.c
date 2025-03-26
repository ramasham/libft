/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 23:48:52 by rsham             #+#    #+#             */
/*   Updated: 2025/02/16 19:15:30 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtok(char *str, const char *delim)
// {
// 	static char	*next;
// 	char		*start;

// 	next = NULL;
// 	if (str != NULL)
// 		next = str;
// 	if (next == NULL)
// 		return (NULL);
// 	start = next;
// 	while (*start && ft_strchr(delim, *start))
// 		start++;
// 	if (*start == '\0')
// 		return (NULL);
// 	next = start;
// 	while (next && !ft_strchr(delim, *next))
// 		next++;
// 	if (*next)
// 	{
// 		next = '\0';
// 		next++;
// 	}
// 	return (start);
// }

char	*ft_strtok(char *str, const char *delim)
{
	static char	*next;
	char		*start;

	if (str != NULL)
		next = str;
	if (next == NULL || *next == '\0')
		return (NULL);

	// Skip leading delimiters
	while (*next && ft_strchr(delim, *next))
		next++;
	if (*next == '\0') 
		return (NULL);

	start = next;

	// Find end of token
	while (*next && !ft_strchr(delim, *next))
		next++;

	if (*next) // If not at end of string
	{
		*next = '\0';  // Null-terminate the token
		next++;        // Move to next token
	}

	return (start);
}
