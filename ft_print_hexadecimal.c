/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:51:14 by dlom              #+#    #+#             */
/*   Updated: 2023/02/26 22:56:07 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ft_print_hexadecimal(int number, char format)
{
	int		len;
	char	*hexa_num;

	if (number == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (format == 'x')
		format = 87;
	else
		format = 55;
}
