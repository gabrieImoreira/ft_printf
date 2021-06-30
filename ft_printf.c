/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:00:54 by gantonio          #+#    #+#             */
/*   Updated: 2021/06/30 00:07:50 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static t_flags		ft_init_flags(void)
{
	t_flags		flags;

	flags.dot = -1;
	flags.minus = 0;
	flags.star = 0;
	flags.type = 0;
	flags.width = 0;
	flags.zero = 0;
	return (flags);
}

static int ft_treat_type(int i, va_list args, char *str)
{
	if(ft_isdigit(str[i]));//tratativa por tipo	
}

static int ft_treat_input(va_list args, char *str)
{
	int char_count;
	int i;

	char_count = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] != '%')
			char_count += ft_putchar(str[i]);
		else if(str[i] == '%' && str[i + 1])
		{
			//ft_treat_type(++i, args, str);
			ft_putchar(str[i]);
		}
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
	char_count = ft_treat_input(args, str_copy);
	va_end(args);
   
   return(char_count);   
}