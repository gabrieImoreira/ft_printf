/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:00:54 by gantonio          #+#    #+#             */
/*   Updated: 2021/06/29 19:20:57 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_treat_input(char *str)
{
	int char_count;
	int i;

	char_count = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] != '%')
			char_count += ft_putchar(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (char_count);
}

int	ft_printf(const char *str, ...)
{
	int char_count;
	char *str_copy;
	va_list args;

	str_copy = ft_strdup(str);
	va_start(args, str);
	char_count = ft_treat_input(str_copy);
	va_end(args);
   
   return(char_count);   
}