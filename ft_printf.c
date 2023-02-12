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

FROM: PRINZ, Peter a Tony. C in a Nutshell: THE DEFINITIVE REFERENCE.
2nd Edition. Sebastopol: O'REILLY, 2016. ISBN 978-1-491-90475-6.
EXAMPLE OF PRINTF
int	score = 120;
char	player[] = "Mary";
printf("%s has %d points. \n", player, score);

THE HEADER stdarg.h defines one type and four macros for use in accessing the optional
arguments of functions that support them.
va_list: object commonly called an argument pointer, serves as a reference to a list
	of optional arguments.
va_start: macro, sets the argument pointer to the first optional argument in the list.
va_arg(): macro, returns the current argument and sets the argument pointer to the
	next one in the list.
va_copy(): macro, copies the va_list object in its current state.
va_end(): macro, cleans up after the use of a va+list object. A function with a variable
	number of arguments must contain a va_end() macro call corresponding to each invocation
	of va_start() or va_copy().

Macros va_copy() and va_end() may also be implemented as functions.
*/
int	ft_printf(char *str, ...)
{
	va_list	arglist;
	va_start(arglist, first);

	while (arg )
}