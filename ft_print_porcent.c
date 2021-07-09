/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_porcent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:59:14 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/09 18:04:06 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_porcent(t_flags flags)
{
	int counter;

	counter = 0;
	if (flags.minus == 1)
		counter += ft_putstr("%", 1);
	counter += ft_treat_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		counter += ft_putstr("%", 1);
	return (counter);
}