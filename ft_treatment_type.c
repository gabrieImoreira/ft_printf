/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:09:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/10 16:51:13 by gantonio         ###   ########.fr       */
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
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_print_char(va_arg(args, int), flags);
	if (c == 's')
		i = ft_print_string(va_arg(args, char *), flags);
	if (c == '%')
		i = ft_print_char('%',flags);
	return (i);
}
