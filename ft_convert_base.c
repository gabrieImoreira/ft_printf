/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:19:52 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/17 19:26:48 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_base(unsigned int number, int base, int counter, char *str)
{
	while (number != 0)
	{
		if ((number % base) < 10)
			str[counter - 1] = (number % base) + 48;
		else
			str[counter - 1] = (number % base) + 55;
		number /= base;
		counter--;
	}
	return (str);
}

char	*ft_convert_base(unsigned int number, int base)
{
	unsigned long long	temp;
	int					counter;
	char				*str;

	temp = number;
	str = 0;
	counter = 0;
	if (number == 0)
		return (ft_strdup("0"));
	while (number != 0)
	{
		number /= base;
		counter++;
	}
	str = malloc(counter + 1);
	if (!str)
		return (0);
	str[counter] = '\0';
	str = ft_base(temp, base, counter, str);
	return (str);
}

char	*ft_hex_tolower(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}
