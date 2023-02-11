/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:04:45 by dlom              #+#    #+#             */
/*   Updated: 2023/02/11 22:04:45 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
/*
FROM: PRINZ, Peter a Ulla KIRCH-PRINZ. C Pocket Reference. O'REILLY, 2003. ISBN 978-0-596-00436-1.
1. declare an object of type va_list (named arglist)
	-va_list: the optional arguments are accessed through va_list
2. Invoke the macro va_start to prepare arglist object to
	return the first optional argument
	- the parametres of va_start are the arglist object and the name of the last mandatory parameter.
3. Invoke the macro va_arg with the initialized arglist object to obtain each of the optional
	arguments in sequence. The second parameter of va_arg is the type of the optional argument that
	is being obtained.
	After those invocations the arglist object is prepared to deliver the first optional argument that
	has not yet been read.
4. After reading out the argument list the function should invoke the va_end macro before returning
	control to the caller.
	- The only parametre of va_end is the arglist object.
*/
int	ft_printf(char *str, ...)
{
	va_list	arglist;
	va_start(arglist, first);

	while (arg )
}