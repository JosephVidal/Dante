/*
** EPITECH PROJECT, 2017
** printf
** File description:
** printf
*/

#include <stdarg.h>

int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);

void determinated_param(va_list ap, int i, char *param)
{
	int tmpi = 0;
	char *displaycharstar;

	if (param[i + 1] == 'd' || param[i + 1] == 'i') {
		tmpi = va_arg(ap, int);
		my_put_nbr(tmpi);
	}
	if (param[i + 1] == 'c') {
		tmpi = va_arg(ap, int);
		if (tmpi != 0)
			my_putchar(tmpi);
	}
	if (param[i + 1] == 's') {
		displaycharstar = va_arg(ap, char *);
		my_putstr(displaycharstar);
	}
}

int verification(char *param, int i)
{
	if (param[i] == '%')
		i++;
	if (param[i] == 'd' || param[i] == 'i')
		i++;
	if (param[i] == 'c')
		i++;
	if (param[i] == 's')
		i++;
	return (i);
}

int my_printf(char *param, ...)
{
	va_list ap;
	int i = 0;
	int x = 0;

	va_start(ap, param);
	while (param[i] != '\0') {
		i = i + x;
		if (i == 0)
			x++;
		if (param[i] == '%') {
			determinated_param(ap, i, param);
			i = verification(param, i);
		}
		if (param[i] != '\0')
			my_putchar(param[i]);
	}
	return (0);
}
