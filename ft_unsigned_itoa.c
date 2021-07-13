/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:46:34 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/12 22:47:25 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_signal(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*ptr;
	int		i;
	int		status;
	long	n2;

	n2 = n;
	status = ft_signal(n2);
	n2 *= status;
	i = ft_len(n);
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (n2 == 0)
		ptr[i] = '0';
	while (n2 > 0)
	{
		ptr[i--] = (n2 % 10) + '0';
		n2 /= 10;
	}
	if (status == -1)
		ptr[i] = '-';
	return (ptr);
}
