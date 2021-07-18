/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:00:54 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/17 19:26:21 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_treat_input(va_list args, const char *str)
{
	int		char_count;
	int		width;
	int		i;

	char_count = 0;
	i = 0;
	while (str[i])
	{
		width = 0;
		if (str[i] != '%')
			char_count += ft_putchar(str[i]);
		else if (str[i] == '%' && str[i + 1])
		{
			while (ft_isdigit(str[++i]))
				width = (width * 10) + (str[i] - 48);
			if (ft_istype(str[i]))
				char_count += ft_treatment_type(str[i], args, width);
			else if (str[i])
				char_count += ft_putchar(str[i]);
		}
		i++;
	}
	return (char_count);
}

int	ft_printf(const char *str, ...)
{
	int		char_count;
	va_list	args;

	va_start(args, str);
	char_count = ft_treat_input(args, str);
	va_end(args);
	return (char_count);
}
