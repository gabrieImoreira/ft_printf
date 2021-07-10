/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:04:46 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/10 16:57:44 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str, t_flags flags)
{
	int	counter;

	counter = 0;
	if (!str)
		str = "(null)";
	if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.minus == 1 && flags.dot >= 0)
		counter += ft_putstr(str, flags.dot);
	else if (flags.minus == 1)
		counter += ft_putstr(str, ft_strlen(str));
	if (flags.dot >= 0)
		counter += ft_print_width(flags.width, flags.dot, 0);
	else
		counter += ft_print_width(flags.width, ft_strlen(str), 0);
	if (flags.minus == 0)
	{
		if (flags.dot >= 0)
			counter += ft_putstr(str, flags.dot);
		else
			counter += ft_putstr(str, ft_strlen(str));
	}
	return (counter);
}
