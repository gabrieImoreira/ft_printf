/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:00:54 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/06 18:09:16 by gantonio         ###   ########.fr       */
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

static int ft_treat_args(int i, va_list args, char *str, t_flags *flags)
{
	while(str[i])
	{	
		if(str[i] == '*')
			*flags = ft_star_flag(args, *flags);
		if(str[i] == '.');
		if(str[i] == '-')
			*flags = ft_minus_flag(args, *flags);
		if(ft_istype(str[i]))
		{
			flags->type = str[i];
			break ;
		}
		i++;
	}
	return (i);
}

static int ft_treat_input(va_list args, char *str)
{
	int char_count;
	int i;
	t_flags	flags;

	char_count = 0;
	i = 0;
	while (str[i])
	{
		flags = ft_init_flags();
		if(str[i] != '%')
			char_count += ft_putchar(str[i]);
		else if(str[i] == '%' && str[i + 1])
		{
			i = ft_treat_args(++i, args, str, &flags);
			if (ft_istype(str[i]))
				char_count += ft_treatment_type((char)flags.type, flags, args);
			else if (str[i])
				char_count += ft_putchar(str[i]);
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