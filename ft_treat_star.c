/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 23:17:39 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/06 17:02:14 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_star(int width, int minus, int zero)
{
	int counter;

	counter = 0;
	while (width > minus)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width--;
		counter++;
	}
	return (counter);
}