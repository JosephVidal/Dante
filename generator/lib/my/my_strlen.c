/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** return the length of the string passed in parameter
*/

int my_strlen(char const *str)
{
	int n = 0;

	while (str[n] != '\0') {
		n++;
	}
	return (n);
}
