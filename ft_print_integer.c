/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/10 19:23:06 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int integer, t_flags flags)
{
	int counter;
	char *str;
	
	counter = 0;
	str = ft_itoa(integer);
	//include zero flag
	if (flags.minus == 1)
		ft_putstr(str, ft_strlen(str));
	counter += ft_print_width(flags.width - ft_strlen(str) + 1, 1, 0);
	if (flags.minus == 0)
		ft_putstr(str, ft_strlen(str));
}