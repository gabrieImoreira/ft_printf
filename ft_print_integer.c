/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/11 13:06:45 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_integer(int integer, t_flags flags)
{
	int		counter;
	int		zero_flag;
	char	*str;
	char	*str_dot;
	int		i;

	i = -1;
	zero_flag = 0;
	counter = 0;
	str = ft_itoa(integer);
	if (flags.dot > 0 && flags.dot > ft_strlen(str))
	{
		ft_memcpy(str_dot, str, ft_strlen(str));
		ft_bzero(str, ft_strlen(str));
		while (++i <= (int)(flags.dot - (flags.width - ft_strlen(str_dot) + 1)))
			str[i] = '0';
		ft_memmove(str + i, str_dot, ft_strlen(str_dot) + 1);
	}
	if (flags.zero == 1)
		zero_flag = 1;
	if (flags.minus == 1)
		ft_putstr(str, ft_strlen(str));
	if (flags.dot > 0)
		counter += ft_print_width((flags.width - ft_strlen(str) + 1), 1, 0);
	else
		counter += ft_print_width(flags.width - ft_strlen(str) + 1, 1, zero_flag);
	if (flags.minus == 0)
		ft_putstr(str, ft_strlen(str));
}
