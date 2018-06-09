/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** return the length of the string passed in parameter
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
