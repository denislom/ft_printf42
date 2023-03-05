/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:05:41 by dlom              #+#    #+#             */
/*   Updated: 2023/03/05 15:30:01 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"
#include "ft_printf.h"
#include "ft_putstr.c"
#include "ft_print_pointer.c"
#include "ft_print_decimal_number.c"
#include "ft_itoa.c"
#include "ft_print_unsigned_decimal.c"
#include "ft_print_hexadecimal.c"
#include <stdio.h>

//test
int	main(void)
{
	char	charac = 'd';
	char *text1 = "String1";
	int	len;
	int	len_printf;
	int	number;
	int	unsigned_number;
	int	hexadecimal_number;
	char *text2 = "String2";
	char *text3;
	int	intmax;
	int	intmin;

	intmax = 2147483647;
	intmin = -2147483648;

	printf("necessary to test %%c, %%s, %%p, %%d, %%i, %%u, %%x, %%X, %%\n");
	//TEST 1 %c
	printf("TEST 1 %%c printf\n");
	len_printf = printf("Test %c\n", charac);
	printf ("_%d_\n", len_printf);
	printf("\n");
	printf("TEST 1 %%c ft_printf\n");
	len_printf = ft_printf("Test %c\n", charac);
	printf ("_%d_\n", len_printf);
	printf("\n");
	// TEST 2 %s
	text3 = malloc(0);
	printf("TEST 2_%%s_______printf\n");
	len_printf = printf("Test %s\n", text3);
	printf ("_%d_\n", len_printf);
	printf("\n");
	printf("TEST 2 %%s ft_printf\n");
	len_printf = ft_printf("Test %s\n", text3);
	printf ("_%d_\n", len_printf);
	printf("\n");

	printf("TEST 2_%%s_______two strings_printf\n");
	len_printf = printf("Test %s and %s\n", text1, text2);
	printf ("_%d_\n", len_printf);
	len_printf = ft_printf("Test %s and %s\n", text1, text2);
	printf ("_%d_\n", len_printf);
	printf("\n");
	
	// TEST 3 %p
	printf("TEST 3_%%p_______printf\n");
	len_printf = printf("Test %p\n", text3);
	printf ("_%d_\n", len_printf);
	printf("\n");
	printf("TEST 3 %%p ft_printf\n");
	len_printf = ft_printf("Test %p\n", text3);
	printf ("_%d_\n", len_printf);
	printf("\n");
	free(text3);

	// TEST 4 %d
	printf("TEST 3_%%d_______printf\n");
	len_printf = printf("Test %d\n", intmax);
	printf ("_%d_\n", len_printf);
	printf("\n");
	printf("TEST 3 %%d ft_printf\n");
	len_printf = ft_printf("Test %d\n", intmax);
	printf ("_%d_\n", len_printf);
	printf("\n");
	len_printf = printf("Test %d\n", intmin);
	printf ("_%d_\n", len_printf);
	printf("\n");
	printf("TEST 3 %%d ft_printf\n");
	len_printf = ft_printf("Test %d\n", intmin);
	printf ("_%d_\n", len_printf);
	printf("\n");

	// number = 20;
	// len_printf = printf("%c %s %s ahoj fsd.", charac, text, text2);
	// printf ("_%d_\n", len_printf);
	// len = ft_printf("%c %s ahoj fsd.", charac, text);
	// ft_printf("_%d_", len);
	// len_printf = printf("%p", &text);
	// printf ("_%d_\n", len_printf);
	// len = ft_printf("%p", &text);
	// ft_printf("_%d_", len);

	// ft_printf("print number: %d", number);
	// ft_printf("print number: %i", number);

	// unsigned_number = 4294967295;
	// ft_printf("print unsigned number: %u", unsigned_number);
	// hexadecimal_number = 12343443;
	// // ft_printf("print unsigned number: %x", unsigned_number);
	// printf ("_%x_\n", unsigned_number);
	// printf ("_%x_\n", hexadecimal_number);
	// ft_printf ("_%x_newline?\n", hexadecimal_number);

	// // have to change print hexadecimal from int to unsigned int.
	// ft_printf ("_%x_%%\n", unsigned_number);
	return (0);
}
