/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:09:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/18 16:49:56 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_istype(int c)
{
	char	*flag;

	flag = "cspdiuxX";
	if (ft_strchr(flag, c) == NULL)
		return (0);
	else
		return (1);
}

int	ft_treatment_type(int c, va_list args, int width)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = ft_print_char(va_arg(args, int), width);
	if (c == 's')
		counter = ft_print_string(va_arg(args, char *), width);
	if (c == 'p')
		counter = ft_print_pointer(va_arg(args, size_t), width);
	if (c == '%')
		counter = ft_print_char('%', width);
	if ((c == 'i') || (c == 'd'))
		counter = ft_print_integer(va_arg(args, int), width);
	if (c == 'u')
		counter = ft_print_unsigned_integer(va_arg(args, unsigned int), width);
	if (c == 'x')
		counter = ft_print_hex(va_arg(args, unsigned int), width, 1);
	if (c == 'X')
		counter = ft_print_hex(va_arg(args, unsigned int), width, 0);
	return (counter);
}
