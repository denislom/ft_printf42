/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:44:23 by dlom              #+#    #+#             */
/*   Updated: 2023/02/27 22:55:49 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"
#include "ft_printf.h"
#include "ft_putstr.c"
#include "ft_print_pointer.c"
#include "ft_print_decimal_number.c"
#include "ft_itoa.c"
#include "ft_print_unsigned_decimal.c"
// #include "ft_print_hexadecimal.c"
#include <stdio.h>

//test
int	main(void)
{
	char	charac = 'd';
	char *text = "Denis";
	int	len;
	int	len_printf;
	int	number;
	int	unsigned_number;
	int	hexadecimal_number;

	number = 20;
	len_printf = printf("%c %s ahoj fsd.", charac, text);
	printf ("_%d_\n", len_printf);
	len = ft_printf("%c %s ahoj fsd.", charac, text);
	ft_printf("_%d_", len);
	len_printf = printf("%p", &text);
	printf ("_%d_\n", len_printf);
	len = ft_printf("%p", &text);
	ft_printf("_%d_", len);

	ft_printf("print number: %d", number);
	ft_printf("print number: %i", number);

	// unsigned_number = 4294967295;
	// ft_printf("print unsigned number: %u", unsigned_number);
	// hexadecimal_number = 12343443;
	// ft_printf("print unsigned number: %x", unsigned_number);
	return (0);
}
