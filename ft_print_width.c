/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 23:17:39 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/17 00:06:36 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_width(int width, int minus)
{
	int	counter;

	counter = 0;
	while (width > minus)
	{
			ft_putchar(' ');
		width--;
		counter++;
	}
	return (counter);
}
