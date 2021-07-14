/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:09:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/14 18:08:43 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_istype(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
		|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int	ft_treatment_type(int c, t_flags flags, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = ft_print_char(va_arg(args, int), flags);
	if (c == 's')
		counter = ft_print_string(va_arg(args, char *), flags);
	if (c == '%')
		counter = ft_print_char('%', flags);
	if ((c == 'i') || (c == 'd'))
		counter = ft_print_integer(va_arg(args, int), flags);
	if (c == 'u')
		counter = ft_print_unsigned_integer(va_arg(args, unsigned int), flags);
	if (c == 'x')
		counter = ft_print_hex(va_arg(args, unsigned int), flags, 0);
	return (counter);
}
