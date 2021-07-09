/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42str.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:04:46 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/09 00:34:22 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_input(char *str, t_flags flags)
{
	int count;

	count = 0;
	if (flags.dot >= 0)
	{
		count += ft_treat_width(flags.dot, ft_strlen(str), 0);
		count += ft_putstr(str, flags.dot);
	}
	else
		count += ft_putstr(str, ft_strlen(str));
	return (count);
}

int			ft_treat_string(char *str, t_flags flags)
{
	int count;

	count = 0;
	if (!str)
		str = "(null)";
	if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.minus == 1)
		count += ft_input(str, flags);
	if (flags.dot >= 0)
		count += ft_treat_width(flags.width, flags.dot, 0);
	else
		count += ft_treat_width(flags.width, ft_strlen(str), 0);
	if (flags.minus == 0)
		count += ft_input(str, flags);
	return (count);
}