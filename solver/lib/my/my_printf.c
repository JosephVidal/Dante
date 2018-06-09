/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdlib.h>

void my_putchar(char);
int my_putstr(char const *);
int my_putnbr(int);
int my_putnbr_base(int, char const *);

void check_flags(char const *fmt, va_list list, int i)
{
	if (fmt[i+1] == 'd')
		my_putnbr(va_arg(list, int));
	if (fmt[i+1] == 's')
		my_putstr(va_arg(list, char *));
	if (fmt[i+1] == 'c')
		my_putchar(va_arg(list, int));
	if (fmt[i+1] == 'u')
		my_putnbr(va_arg(list, unsigned int));
	if (fmt[i+1] == 'p') {
		my_putstr("0x");
		my_putnbr(va_arg(list, long));
	}
}

int my_printf(char const *fmt, ...)
{
	va_list list;
	int i = 0;

	va_start(list, fmt);
	if (fmt == NULL)
		return (84);
	while (fmt[i] != '\0') {
		if (fmt[i] == '%') {
			check_flags(fmt, list, i);
			i += 2;
		} else {
			my_putchar(fmt[i]);
			i++;
		}
	}
	va_end(list);
	return (0);
}
