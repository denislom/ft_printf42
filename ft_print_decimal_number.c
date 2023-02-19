/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal_number.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:27:40 by dlom              #+#    #+#             */
/*   Updated: 2023/02/19 16:17:04 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal_number(int number)
{
	char	*temp;
	int		printed_chars;

	temp = ft_itoa(number);
	printed_chars = ft_putstr(temp);
	free(temp);
	return (printed_chars);
}
