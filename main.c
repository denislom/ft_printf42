/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:44:23 by dlom              #+#    #+#             */
/*   Updated: 2023/02/18 23:45:15 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"
#include "ft_printf.h"
#include "ft_putstr.c"
#include "ft_print_pointer.c"

//test
int	main(void)
{
	char	charac = 'd';
	char *text = "Denis";
	int	len;
	len = ft_printf("%c %s ahoj fsd.", charac, text);
	ft_printf("%d_", len);
	len = ft_printf("%p", &text);
	ft_printf("%d_", len);
	return (0);
}
