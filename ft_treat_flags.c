/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:03:07 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/08 23:53:35 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_star_flag(va_list args, t_flags flags)
{
	flags.star = 1;
	flags.width = va_arg(args, int);
	if (flags.width < 0)
	{
		flags.minus = 1;
		flags.width *= -1;
		flags.zero = 0;
	}
	return (flags);
}

t_flags	ft_digit_flag(char c, t_flags flags)
{
	if (flags.star == 1)
		flags.width = 0;
	flags.width = (flags.width * 10) + (c - 48);
	return (flags);
}

t_flags	ft_minus_flag(va_list args, t_flags flags)
{
	flags.minus = 1;
	flags.zero = 0;
	return (flags);
}

int	ft_dot_flag(char *str, int i, t_flags *flags, va_list args)
{
	i++;
	if (str[i] == '*')
	{
		flags->dot = va_arg(args, int);
		i++;
	}
	else
	{
		flags->dot = 0;
		while (ft_isdigit(str[i]))
		{
			flags->dot = (flags->dot * 10) + (str[i] - 48);
			i++;
		}
	}
	return (i);
}